#include "toolbar.h"
#include "ui_toolbar.h"

#include <QPainter>

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
    QRectF rectangle(-5, 0, 810, 38);

    QPainter painter(this);

    QLinearGradient linearGradient(0, 0, 0, 20);
    linearGradient.setColorAt(0.0, QColor(180,180,180) );
    linearGradient.setColorAt(0.33, Qt::gray );
    linearGradient.setColorAt(1.0, QColor(120,120,120) );

    painter.setPen( QColor(90, 90, 90) );
    painter.setBrush(linearGradient);
    painter.drawRect(rectangle);
}
