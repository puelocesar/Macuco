/********************************************************************************
** Form generated from reading ui file 'toolbar.ui'
**
** Created: Sun Nov 15 23:49:02 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TOOLBAR_H
#define UI_TOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Toolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *backButton;
    QToolButton *fowardButton;
    QToolButton *reloadButton;
    QLineEdit *inputAddress;
    QToolButton *favButton;

    void setupUi(QWidget *Toolbar)
    {
        if (Toolbar->objectName().isEmpty())
            Toolbar->setObjectName(QString::fromUtf8("Toolbar"));
        Toolbar->resize(540, 30);
        Toolbar->setAutoFillBackground(true);
        Toolbar->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"color: black;\n"
"border: 1px solid #888;\n"
"border-radius: 4px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #aaa);\n"
"}\n"
"QToolButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bbb);\n"
"}\n"
"QToolButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ddd);\n"
"}\n"
"\n"
"QLineEdit {\n"
"color: black;\n"
"border: 1px solid #888;\n"
"border-radius: 4px;\n"
"}"));
        horizontalLayout = new QHBoxLayout(Toolbar);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 0, 8, 0);
        backButton = new QToolButton(Toolbar);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/toolbar/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);

        horizontalLayout->addWidget(backButton);

        fowardButton = new QToolButton(Toolbar);
        fowardButton->setObjectName(QString::fromUtf8("fowardButton"));
        fowardButton->setAutoFillBackground(false);
        fowardButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(fowardButton);

        reloadButton = new QToolButton(Toolbar);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));

        horizontalLayout->addWidget(reloadButton);

        inputAddress = new QLineEdit(Toolbar);
        inputAddress->setObjectName(QString::fromUtf8("inputAddress"));

        horizontalLayout->addWidget(inputAddress);

        favButton = new QToolButton(Toolbar);
        favButton->setObjectName(QString::fromUtf8("favButton"));

        horizontalLayout->addWidget(favButton);


        retranslateUi(Toolbar);

        QMetaObject::connectSlotsByName(Toolbar);
    } // setupUi

    void retranslateUi(QWidget *Toolbar)
    {
        Toolbar->setWindowTitle(QApplication::translate("Toolbar", "Dialog", 0, QApplication::UnicodeUTF8));
        backButton->setText(QString());
        fowardButton->setText(QApplication::translate("Toolbar", ">", 0, QApplication::UnicodeUTF8));
        reloadButton->setText(QApplication::translate("Toolbar", "R", 0, QApplication::UnicodeUTF8));
        favButton->setText(QApplication::translate("Toolbar", ":)", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Toolbar);
    } // retranslateUi

};

namespace Ui {
    class Toolbar: public Ui_Toolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBAR_H
