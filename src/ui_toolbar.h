/********************************************************************************
** Form generated from reading UI file 'toolbar.ui'
**
** Created: Tue Dec 1 13:25:30 2009
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
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
    QToolButton *hideToolbarButton;

    void setupUi(QWidget *Toolbar)
    {
        if (Toolbar->objectName().isEmpty())
            Toolbar->setObjectName(QString::fromUtf8("Toolbar"));
        Toolbar->resize(540, 40);
        Toolbar->setAutoFillBackground(true);
        Toolbar->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"color: black;\n"
"border: 1px solid #888;\n"
"border-radius: 4px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #d2d2d2);\n"
"}\n"
"QToolButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #e2e2e2);\n"
"}\n"
"QToolButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #c2c2c2);\n"
"}\n"
"QLineEdit {\n"
"color: black;\n"
"border: 1px solid #888;\n"
"border-radius: 4px;\n"
"}\n"
"Toolbar {\n"
"background: rgb(144, 144, 144);\n"
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
        backButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(backButton);

        fowardButton = new QToolButton(Toolbar);
        fowardButton->setObjectName(QString::fromUtf8("fowardButton"));
        fowardButton->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/toolbar/foward.png"), QSize(), QIcon::Normal, QIcon::Off);
        fowardButton->setIcon(icon1);
        fowardButton->setIconSize(QSize(24, 24));
        fowardButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(fowardButton);

        reloadButton = new QToolButton(Toolbar);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/toolbar/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        reloadButton->setIcon(icon2);
        reloadButton->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(reloadButton);

        inputAddress = new QLineEdit(Toolbar);
        inputAddress->setObjectName(QString::fromUtf8("inputAddress"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(24);
        sizePolicy.setHeightForWidth(inputAddress->sizePolicy().hasHeightForWidth());
        inputAddress->setSizePolicy(sizePolicy);
        inputAddress->setMinimumSize(QSize(0, 28));

        horizontalLayout->addWidget(inputAddress);

        hideToolbarButton = new QToolButton(Toolbar);
        hideToolbarButton->setObjectName(QString::fromUtf8("hideToolbarButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(24);
        sizePolicy1.setHeightForWidth(hideToolbarButton->sizePolicy().hasHeightForWidth());
        hideToolbarButton->setSizePolicy(sizePolicy1);
        hideToolbarButton->setMinimumSize(QSize(0, 28));
        hideToolbarButton->setIconSize(QSize(16, 24));

        horizontalLayout->addWidget(hideToolbarButton);


        retranslateUi(Toolbar);

        QMetaObject::connectSlotsByName(Toolbar);
    } // setupUi

    void retranslateUi(QWidget *Toolbar)
    {
        Toolbar->setWindowTitle(QApplication::translate("Toolbar", "Dialog", 0, QApplication::UnicodeUTF8));
        backButton->setText(QString());
        fowardButton->setText(QString());
        reloadButton->setText(QString());
        hideToolbarButton->setText(QApplication::translate("Toolbar", "<", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Toolbar: public Ui_Toolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLBAR_H
