/********************************************************************************
** Form generated from reading UI file 'hiro.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIRO_H
#define UI_HIRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hiro
{
public:
    QAction *actionO_Programu;
    QAction *actionImport_nastaven;
    QAction *actionExport_nastaven;
    QAction *actionKonec;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuHiro;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Hiro)
    {
        if (Hiro->objectName().isEmpty())
            Hiro->setObjectName(QStringLiteral("Hiro"));
        Hiro->resize(1064, 633);
        actionO_Programu = new QAction(Hiro);
        actionO_Programu->setObjectName(QStringLiteral("actionO_Programu"));
        actionImport_nastaven = new QAction(Hiro);
        actionImport_nastaven->setObjectName(QStringLiteral("actionImport_nastaven"));
        actionExport_nastaven = new QAction(Hiro);
        actionExport_nastaven->setObjectName(QStringLiteral("actionExport_nastaven"));
        actionKonec = new QAction(Hiro);
        actionKonec->setObjectName(QStringLiteral("actionKonec"));
        centralWidget = new QWidget(Hiro);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Hiro->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Hiro);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1064, 22));
        menuHiro = new QMenu(menuBar);
        menuHiro->setObjectName(QStringLiteral("menuHiro"));
        Hiro->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Hiro);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Hiro->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Hiro);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Hiro->setStatusBar(statusBar);

        menuBar->addAction(menuHiro->menuAction());
        menuHiro->addAction(actionO_Programu);
        menuHiro->addAction(actionImport_nastaven);
        menuHiro->addAction(actionExport_nastaven);
        menuHiro->addAction(actionKonec);

        retranslateUi(Hiro);

        QMetaObject::connectSlotsByName(Hiro);
    } // setupUi

    void retranslateUi(QMainWindow *Hiro)
    {
        Hiro->setWindowTitle(QApplication::translate("Hiro", "Hiro", nullptr));
        actionO_Programu->setText(QApplication::translate("Hiro", "O Programu", nullptr));
        actionImport_nastaven->setText(QApplication::translate("Hiro", "Import nastaven\303\255", nullptr));
        actionExport_nastaven->setText(QApplication::translate("Hiro", "Export nastaven\303\255", nullptr));
        actionKonec->setText(QApplication::translate("Hiro", "Konec", nullptr));
        menuHiro->setTitle(QApplication::translate("Hiro", "Hlavn\303\255 nab\303\255dka", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hiro: public Ui_Hiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIRO_H
