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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QAction *actionAdministrace;
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *input_nickname;
    QLineEdit *input_pass;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *butt_reg;
    QPushButton *butt_login;
    QPushButton *butt_end;
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
        actionAdministrace = new QAction(Hiro);
        actionAdministrace->setObjectName(QStringLiteral("actionAdministrace"));
        centralWidget = new QWidget(Hiro);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 200, 441, 31));
        label->setAlignment(Qt::AlignCenter);
        input_nickname = new QLineEdit(centralWidget);
        input_nickname->setObjectName(QStringLiteral("input_nickname"));
        input_nickname->setGeometry(QRect(350, 240, 321, 21));
        input_nickname->setLayoutDirection(Qt::RightToLeft);
        input_nickname->setStyleSheet(QStringLiteral("align: right;"));
        input_nickname->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_pass = new QLineEdit(centralWidget);
        input_pass->setObjectName(QStringLiteral("input_pass"));
        input_pass->setGeometry(QRect(350, 270, 321, 21));
        input_pass->setLayoutDirection(Qt::RightToLeft);
        input_pass->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 240, 131, 20));
        label_2->setStyleSheet(QStringLiteral("background: white; padding: 1px; border: 1px solid;"));
        label_2->setMargin(2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 270, 131, 20));
        label_3->setStyleSheet(QStringLiteral("background: white; padding: 1px; border: 1px solid;"));
        label_3->setMargin(2);
        butt_reg = new QPushButton(centralWidget);
        butt_reg->setObjectName(QStringLiteral("butt_reg"));
        butt_reg->setGeometry(QRect(240, 300, 114, 41));
        butt_login = new QPushButton(centralWidget);
        butt_login->setObjectName(QStringLiteral("butt_login"));
        butt_login->setGeometry(QRect(390, 300, 114, 41));
        butt_end = new QPushButton(centralWidget);
        butt_end->setObjectName(QStringLiteral("butt_end"));
        butt_end->setGeometry(QRect(540, 300, 114, 41));
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
        menuHiro->addAction(actionAdministrace);
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
        actionAdministrace->setText(QApplication::translate("Hiro", "Administrace", nullptr));
        label->setText(QApplication::translate("Hiro", "Do syst\303\251mu se mus\303\255te p\305\231ihl\303\241sit", nullptr));
        label_2->setText(QApplication::translate("Hiro", " U\305\276ivatelsk\303\251 jm\303\251no", nullptr));
        label_3->setText(QApplication::translate("Hiro", " Heslo", nullptr));
        butt_reg->setText(QApplication::translate("Hiro", "Registrace", nullptr));
        butt_login->setText(QApplication::translate("Hiro", "P\305\231ihl\303\241\305\241en\303\255", nullptr));
        butt_end->setText(QApplication::translate("Hiro", "Konec", nullptr));
        menuHiro->setTitle(QApplication::translate("Hiro", "Hlavn\303\255 nab\303\255dka", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hiro: public Ui_Hiro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIRO_H
