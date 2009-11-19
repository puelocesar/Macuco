#ifndef MINIFIEDTOOLBAR_H
#define MINIFIEDTOOLBAR_H

#include <QtGui/QWidget>
#include <QToolButton>

namespace Ui {
    class MinifiedToolbar;
}

class MinifiedToolbar : public QWidget {
    Q_OBJECT
public:
    MinifiedToolbar(QWidget *parent = 0);
    ~MinifiedToolbar();

    QToolButton *getShowToolbarButton();

protected:
    void paintEvent ( QPaintEvent * event );

private:
    Ui::MinifiedToolbar *m_ui;
};

#endif // MINIFIEDTOOLBAR_H
