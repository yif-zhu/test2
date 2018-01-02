#ifndef TEST2_H
#define TEST2_H

#include <QtWidgets/QMainWindow>
#include "ui_test2.h"
#include "colorchanged.h"
#include <qtranslator.h>


class test2 : public QMainWindow
{
	Q_OBJECT

public:
	test2(QWidget *parent = 0);
	~test2();

private slots:
	void on_actionOpen(bool f);
	void on_actionSave(bool f);
	void on_actionSaveAs(bool f);
	void on_actionHelp(bool f);
	void on_actionColor(bool f);
	void on_actionEnglish(bool f);
	void on_actionChinese(bool f);

private:
	Ui::test2Class ui;
	bool flags;//������ʾ�ļ��Ƿ����
	QString path;	//�����õ��ļ���·��
	ColorChanged *color;
	QTranslator *m_Translater;

};

#endif // TEST2_H
