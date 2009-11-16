#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QtGui/QWidget>

namespace Ui {
    class Toolbar;
}

class Toolbar : public QWidget {
    Q_OBJECT

public:
    Toolbar(QWidget *parent = 0);
    ~Toolbar();

protected:
    void paintEvent ( QPaintEvent * event );

private:
    Ui::Toolbar *m_ui;
};

#endif // TOOLBAR_H
