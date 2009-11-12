#include "errorbox.h"
#include "ui_errorbox.h"

ErrorBox::ErrorBox(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::ErrorBox)
{
    m_ui->setupUi(this);
}

ErrorBox::~ErrorBox()
{
    delete m_ui;
}

void ErrorBox::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

QPushButton* ErrorBox::getRetryButton()
{
    return m_ui->bRetry;
}
