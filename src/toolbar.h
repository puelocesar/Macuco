#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QtGui/QWidget>
#include <QToolButton>

namespace Ui {
    class Toolbar;
}

class Toolbar : public QWidget {
    Q_OBJECT

public:
    Toolbar(QWidget *parent = 0);
    ~Toolbar();

    QToolButton *getHideToolbarButton();

protected:
    void paintEvent ( QPaintEvent * event );

private:
    Ui::Toolbar *m_ui;
};

#endif // TOOLBAR_H
