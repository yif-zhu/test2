#include "colorchanged.h"
#include <QFile>
#include <QTextStream>

ColorChanged::ColorChanged(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	styleSheet = "styleSheet";
}

ColorChanged::~ColorChanged()
{

}

void ColorChanged::on_comboBox_activated(int index)
{
	switch (index) {
	case 0:
		styleSheet = "styleSheet";
		break;
	case 1:
		styleSheet = "white";
		break;
	case 2:
		styleSheet = "dark";
		break;
	default:
		break;
	}
}

void ColorChanged::on_pushButton_clicked()
{
	QFile file("style/" + styleSheet + ".qss");
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QTextStream in(&file);
		QString style = in.readAll();
		file.close();
		qApp->setStyleSheet(style);
	}
	close();
}

void ColorChanged::on_pushButton_2_clicked()
{
	close();
}
