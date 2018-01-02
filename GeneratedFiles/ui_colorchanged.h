/********************************************************************************
** Form generated from reading UI file 'colorchanged.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORCHANGED_H
#define UI_COLORCHANGED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ColorChanged
{
public:
    QLabel *label;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ColorChanged)
    {
        if (ColorChanged->objectName().isEmpty())
            ColorChanged->setObjectName(QStringLiteral("ColorChanged"));
        ColorChanged->resize(400, 300);
        label = new QLabel(ColorChanged);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 80, 91, 16));
        comboBox = new QComboBox(ColorChanged);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(200, 80, 69, 22));
        pushButton = new QPushButton(ColorChanged);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 170, 75, 23));
        pushButton_2 = new QPushButton(ColorChanged);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 170, 75, 23));

        retranslateUi(ColorChanged);
        QObject::connect(pushButton, SIGNAL(clicked()), ColorChanged, SLOT(on_pushButton_clicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), ColorChanged, SLOT(on_pushButton_2_clicked()));
        QObject::connect(comboBox, SIGNAL(activated(int)), ColorChanged, SLOT(on_comboBox_activated(int)));

        QMetaObject::connectSlotsByName(ColorChanged);
    } // setupUi

    void retranslateUi(QDialog *ColorChanged)
    {
        ColorChanged->setWindowTitle(QApplication::translate("ColorChanged", "ColorChanged", Q_NULLPTR));
        label->setText(QApplication::translate("ColorChanged", "\344\275\240\345\226\234\346\254\242\347\232\204\351\242\234\350\211\262\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ColorChanged", "\346\232\227\346\251\231\350\211\262", Q_NULLPTR)
         << QApplication::translate("ColorChanged", "\347\231\275\350\211\262\351\235\223\344\270\275", Q_NULLPTR)
         << QApplication::translate("ColorChanged", "\351\273\221\350\211\262\347\202\253\351\205\267", Q_NULLPTR)
        );
        pushButton->setText(QApplication::translate("ColorChanged", "\347\241\256\345\256\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ColorChanged", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorChanged: public Ui_ColorChanged {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORCHANGED_H
