/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Jul 12 10:07:17 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLineEdit *email;
    QLineEdit *clg;
    QLineEdit *captcha;
    QPushButton *pushButton;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *c1;
    QLabel *c2;
    QLabel *c3;
    QLabel *c4;
    QLabel *c5;
    QFrame *line;
    QPushButton *refresh;
    QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(595, 422);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 66, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 66, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 66, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 66, 17));
        name = new QLineEdit(centralWidget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(130, 10, 161, 27));
        email = new QLineEdit(centralWidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(130, 60, 161, 27));
        clg = new QLineEdit(centralWidget);
        clg->setObjectName(QString::fromUtf8("clg"));
        clg->setGeometry(QRect(130, 110, 161, 27));
        captcha = new QLineEdit(centralWidget);
        captcha->setObjectName(QString::fromUtf8("captcha"));
        captcha->setGeometry(QRect(130, 230, 113, 27));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 290, 98, 27));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(120, 160, 191, 61));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 171, 41));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        c1 = new QLabel(frame_2);
        c1->setObjectName(QString::fromUtf8("c1"));
        c1->setGeometry(QRect(10, 0, 31, 31));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        font.setStrikeOut(true);
        c1->setFont(font);
        c2 = new QLabel(frame_2);
        c2->setObjectName(QString::fromUtf8("c2"));
        c2->setGeometry(QRect(40, 10, 31, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("KacstNaskh"));
        font1.setPointSize(20);
        font1.setStrikeOut(false);
        c2->setFont(font1);
        c3 = new QLabel(frame_2);
        c3->setObjectName(QString::fromUtf8("c3"));
        c3->setGeometry(QRect(70, 10, 31, 21));
        QFont font2;
        font2.setPointSize(20);
        c3->setFont(font2);
        c4 = new QLabel(frame_2);
        c4->setObjectName(QString::fromUtf8("c4"));
        c4->setGeometry(QRect(100, 20, 31, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("LMSansQuot8"));
        font3.setPointSize(18);
        font3.setItalic(true);
        font3.setStrikeOut(true);
        c4->setFont(font3);
        c5 = new QLabel(frame_2);
        c5->setObjectName(QString::fromUtf8("c5"));
        c5->setGeometry(QRect(130, 10, 31, 21));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setWeight(50);
        font4.setStrikeOut(true);
        c5->setFont(font4);
        line = new QFrame(frame_2);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 0, 181, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        refresh = new QPushButton(centralWidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(250, 290, 98, 27));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(400, 290, 98, 27));
        MainWindow->setCentralWidget(centralWidget);
        frame->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        name->raise();
        email->raise();
        clg->raise();
        captcha->raise();
        pushButton->raise();
        refresh->raise();
        exit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 595, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "E-mail", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "College", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Captcha", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Submit", 0, QApplication::UnicodeUTF8));
        c1->setText(QApplication::translate("MainWindow", "c1", 0, QApplication::UnicodeUTF8));
        c2->setText(QApplication::translate("MainWindow", "c2", 0, QApplication::UnicodeUTF8));
        c3->setText(QApplication::translate("MainWindow", "c3", 0, QApplication::UnicodeUTF8));
        c4->setText(QApplication::translate("MainWindow", "c4", 0, QApplication::UnicodeUTF8));
        c5->setText(QApplication::translate("MainWindow", "c5", 0, QApplication::UnicodeUTF8));
        refresh->setText(QApplication::translate("MainWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
