#ifndef COLORCHANGED_H
#define COLORCHANGED_H

#include <QDialog>
#include "ui_colorchanged.h"

class ColorChanged : public QDialog
{
	Q_OBJECT

public:
	ColorChanged(QWidget *parent = 0);
	~ColorChanged();

private slots:
	
	void on_comboBox_activated(int index);

	void on_pushButton_clicked();

	void on_pushButton_2_clicked();

private:
	Ui::ColorChanged ui;
	QString styleSheet;//得到颜色背景选项

};

#endif // COLORCHANGED_H
