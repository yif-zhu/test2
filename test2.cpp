#include "test2.h"
#include <qlabel.h>
#include <qlineedit.h>
#include <QVBoxLayout>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QFont>
#include <qdir.h>
#include <QDebug>
#include <qtranslator.h>


test2::test2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	flags = false;
	color = new ColorChanged();
	m_Translater = new QTranslator(this);

	QFont font;
	font.setPointSize(12);
	font.setWeight(QFont::Thin);
	ui.textEdit->setFont(font);
	setFont(font);//�����ı������������ʽ

}

test2::~test2()
{

}

void test2::on_actionOpen(bool f)//�򿪰�ť
{
	path = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Text Files(*.txt);;XML files (*.xml)"));
	if (!path.isEmpty()) {
		QFile file(path);
		setWindowTitle(path);
		if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
			QMessageBox::warning(this, tr("Read File"), tr("Cannot open file:\n").arg(path));
			return;
		}
		QTextStream in(&file);
		ui.textEdit->setText(in.readAll());
		flags = true;
		file.close();
	}
	else {
		QMessageBox::warning(this, tr("Path"), tr("You did not select any file."));
	}
}

void test2::on_actionSave(bool f)//���水ť
{
	if (flags == true)
	{
		QFile file(path);
		QTextStream in(&file);
		QString str = ui.textEdit->toPlainText();
		in << str;
		file.close();
	}
	else
	{
		QString filename = QFileDialog::getSaveFileName(this, tr("Save Text"),
			"", tr("Text files(*.txt);;XML files (*.xml)")); //ѡ��·��
		if (filename.isEmpty())
		{
			return;
		}
		else
		{
			QFile file(filename);
			if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
				QMessageBox::warning(this, tr("Read File"), tr("Cannot open file:\n").arg(filename));
				return;
			}
			else
			{
				QTextStream in(&file);
				QString str = ui.textEdit->toPlainText();
				in << str;

				file.close();
			}
		}
	}
}

void test2::on_actionSaveAs(bool f)//���Ϊ��ť
{
	QString filename = QFileDialog::getSaveFileName(this, tr("Save Text"),
		"", tr("Text files(*.txt);;XML files (*.xml)")); //ѡ��·��
	if (filename.isEmpty())
	{
		return;
	}
	else
	{
		QFile file(filename);
		if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
			QMessageBox::warning(this, tr("Read File"), tr("Cannot open file:\n").arg(filename));
			return;
		}
		else
		{
			QTextStream in(&file);
			QString str = ui.textEdit->toPlainText();
			in << str;

			file.close();
		}
	}
	setWindowTitle(filename);
}

void test2::on_actionHelp(bool f)//������ť
{
	QMessageBox::information(this, "information", "Editor: yif_zhu \nDate: 2017.11.15 \nCost: 1 day \n");
	qDebug() << QDir::currentPath();

}

void test2::on_actionColor(bool f)//��ɫ��ť
{
	color->show();
	
}

void test2::on_actionEnglish(bool f)
{
	//QMessageBox::information(this, "information", " û �� ʵ �� ");
	//qDebug() << QDir::currentPath();
	m_Translater->load("test2_en.qm");
	qApp->installTranslator(m_Translater);
	ui.retranslateUi(this);
}

void test2::on_actionChinese(bool f)	
{
	//QMessageBox::information(this, "information", " û �� ʵ �� ");
	m_Translater->load("test2_zh.qm");
	qApp->installTranslator(m_Translater);
	ui.retranslateUi(this);
}

 