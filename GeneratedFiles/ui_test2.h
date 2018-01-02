/********************************************************************************
** Form generated from reading UI file 'test2.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_H
#define UI_TEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test2Class
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionHelp;
    QAction *action_Color;
    QAction *actionEnglish;
    QAction *actionChinese;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menuLanguge;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *test2Class)
    {
        if (test2Class->objectName().isEmpty())
            test2Class->setObjectName(QStringLiteral("test2Class"));
        test2Class->resize(600, 431);
        actionOpen = new QAction(test2Class);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(test2Class);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave_As = new QAction(test2Class);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionHelp = new QAction(test2Class);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        action_Color = new QAction(test2Class);
        action_Color->setObjectName(QStringLiteral("action_Color"));
        actionEnglish = new QAction(test2Class);
        actionEnglish->setObjectName(QStringLiteral("actionEnglish"));
        actionChinese = new QAction(test2Class);
        actionChinese->setObjectName(QStringLiteral("actionChinese"));
        centralWidget = new QWidget(test2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        test2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(test2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menuLanguge = new QMenu(menu_3);
        menuLanguge->setObjectName(QStringLiteral("menuLanguge"));
        test2Class->setMenuBar(menuBar);
        statusBar = new QStatusBar(test2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        test2Class->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionSave);
        menu->addAction(actionSave_As);
        menu_2->addAction(actionHelp);
        menu_2->addAction(action_Color);
        menu_3->addAction(menuLanguge->menuAction());
        menuLanguge->addAction(actionEnglish);
        menuLanguge->addAction(actionChinese);

        retranslateUi(test2Class);
        QObject::connect(actionHelp, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionHelp(bool)));
        QObject::connect(actionOpen, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionOpen(bool)));
        QObject::connect(actionSave, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionSave(bool)));
        QObject::connect(actionSave_As, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionSaveAs(bool)));
        QObject::connect(action_Color, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionColor(bool)));
        QObject::connect(actionEnglish, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionEnglish(bool)));
        QObject::connect(actionChinese, SIGNAL(triggered(bool)), test2Class, SLOT(on_actionChinese(bool)));

        QMetaObject::connectSlotsByName(test2Class);
    } // setupUi

    void retranslateUi(QMainWindow *test2Class)
    {
        test2Class->setWindowTitle(QApplication::translate("test2Class", "test2", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("test2Class", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("test2Class", "Save", Q_NULLPTR));
        actionSave_As->setText(QApplication::translate("test2Class", "Save As", Q_NULLPTR));
        actionHelp->setText(QApplication::translate("test2Class", "Help", Q_NULLPTR));
        action_Color->setText(QApplication::translate("test2Class", "Color", Q_NULLPTR));
        actionEnglish->setText(QApplication::translate("test2Class", "English", Q_NULLPTR));
        actionChinese->setText(QApplication::translate("test2Class", "Chinese", Q_NULLPTR));
        menu->setTitle(QApplication::translate("test2Class", "\345\274\200\345\247\213", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("test2Class", "\345\270\256\345\212\251", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("test2Class", "\350\256\276\347\275\256", Q_NULLPTR));
        menuLanguge->setTitle(QApplication::translate("test2Class", "Languge", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class test2Class: public Ui_test2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_H
