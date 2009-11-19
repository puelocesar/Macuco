/********************************************************************************
** Form generated from reading ui file 'minifiedtoolbar.ui'
**
** Created: Thu Nov 19 21:18:49 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MINIFIEDTOOLBAR_H
#define UI_MINIFIEDTOOLBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MinifiedToolbar
{
public:
    QHBoxLayout *horizontalLayout;
    QToolButton *showToolbarButton;

    void setupUi(QWidget *MinifiedToolbar)
    {
        if (MinifiedToolbar->objectName().isEmpty())
            MinifiedToolbar->setObjectName(QString::fromUtf8("MinifiedToolbar"));
        MinifiedToolbar->resize(26, 40);
        horizontalLayout = new QHBoxLayout(MinifiedToolbar);
        horizontalLayout->setMargin(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        showToolbarButton = new QToolButton(MinifiedToolbar);
        showToolbarButton->setObjectName(QString::fromUtf8("showToolbarButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(24);
        sizePolicy.setHeightForWidth(showToolbarButton->sizePolicy().hasHeightForWidth());
        showToolbarButton->setSizePolicy(sizePolicy);
        showToolbarButton->setMinimumSize(QSize(0, 28));
        showToolbarButton->setIconSize(QSize(16, 24));

        horizontalLayout->addWidget(showToolbarButton);


        retranslateUi(MinifiedToolbar);

        QMetaObject::connectSlotsByName(MinifiedToolbar);
    } // setupUi

    void retranslateUi(QWidget *MinifiedToolbar)
    {
        MinifiedToolbar->setWindowTitle(QApplication::translate("MinifiedToolbar", "Form", 0, QApplication::UnicodeUTF8));
        MinifiedToolbar->setStyleSheet(QApplication::translate("MinifiedToolbar", "QToolButton {\n"
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
"}", 0, QApplication::UnicodeUTF8));
        showToolbarButton->setText(QApplication::translate("MinifiedToolbar", ">", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(MinifiedToolbar);
    } // retranslateUi

};

namespace Ui {
    class MinifiedToolbar: public Ui_MinifiedToolbar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINIFIEDTOOLBAR_H
