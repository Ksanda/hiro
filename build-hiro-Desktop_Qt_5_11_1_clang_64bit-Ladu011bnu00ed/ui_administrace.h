/********************************************************************************
** Form generated from reading UI file 'administrace.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRACE_H
#define UI_ADMINISTRACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuKonec;
    QMenu *menuServer;
    QMenu *menuSit;
    QMenu *menuZamestnanci;
    QMenu *menuFaktury;
    QMenu *menuSklad;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuKonec = new QMenu(menubar);
        menuKonec->setObjectName(QStringLiteral("menuKonec"));
        menuServer = new QMenu(menubar);
        menuServer->setObjectName(QStringLiteral("menuServer"));
        menuSit = new QMenu(menubar);
        menuSit->setObjectName(QStringLiteral("menuSit"));
        menuZamestnanci = new QMenu(menubar);
        menuZamestnanci->setObjectName(QStringLiteral("menuZamestnanci"));
        menuFaktury = new QMenu(menubar);
        menuFaktury->setObjectName(QStringLiteral("menuFaktury"));
        menuSklad = new QMenu(menubar);
        menuSklad->setObjectName(QStringLiteral("menuSklad"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuKonec->menuAction());
        menubar->addAction(menuServer->menuAction());
        menubar->addAction(menuSit->menuAction());
        menubar->addAction(menuZamestnanci->menuAction());
        menubar->addAction(menuFaktury->menuAction());
        menubar->addAction(menuSklad->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        menuKonec->setTitle(QApplication::translate("MainWindow", "Konec", nullptr));
        menuServer->setTitle(QApplication::translate("MainWindow", "Server", nullptr));
        menuSit->setTitle(QApplication::translate("MainWindow", "Sit", nullptr));
        menuZamestnanci->setTitle(QApplication::translate("MainWindow", "Zamestnanci", nullptr));
        menuFaktury->setTitle(QApplication::translate("MainWindow", "Faktury", nullptr));
        menuSklad->setTitle(QApplication::translate("MainWindow", "Sklad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRACE_H
