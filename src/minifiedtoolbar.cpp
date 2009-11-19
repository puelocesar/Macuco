#include "minifiedtoolbar.h"
#include "ui_minifiedtoolbar.h"

#include <QPainter>

MinifiedToolbar::MinifiedToolbar(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::MinifiedToolbar)
{
    m_ui->setupUi(this);
}

MinifiedToolbar::~MinifiedToolbar()
{
    delete m_ui;
}

void MinifiedToolbar::paintEvent ( QPaintEvent * event )
{
    Q_UNUSED(event);

    QRectF rectangle(-15, 0, 43, 43);
    QPainter painter(this);

    QLinearGradient linearGradient(0, 0, 0, 20);
    linearGradient.setColorAt(0.0, QColor(180,180,180) );
    linearGradient.setColorAt(0.33, Qt::gray );
    linearGradient.setColorAt(1.0, QColor(120,120,120) );

    painter.setPen( QColor(90, 90, 90) );
    painter.setBrush(linearGradient);
    painter.drawRoundedRect(rectangle, 8.0, 8.0);
}

QToolButton* MinifiedToolbar::getShowToolbarButton()
{
    return m_ui->showToolbarButton;
}
