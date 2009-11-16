#include "toolbar.h"
#include "ui_toolbar.h"

Toolbar::Toolbar(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Toolbar)
{
    m_ui->setupUi(this);
}

Toolbar::~Toolbar()
{
    delete m_ui;
}

void Toolbar::paintEvent ( QPaintEvent * event )
{

}
