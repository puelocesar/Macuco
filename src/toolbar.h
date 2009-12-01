#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QtGui/QWidget>
#include <QToolButton>
#include <QLineEdit>

#include "ui_toolbar.h"

namespace Ui {
    class Toolbar;
}

class Toolbar : public QWidget {
    Q_OBJECT

public:
    Toolbar(QWidget *parent = 0);
    ~Toolbar();

    QToolButton* getHideToolbarButton() { return m_ui->hideToolbarButton; }
    QToolButton* getBackButton() { return m_ui->backButton; }
    QToolButton* getFowardButton() { return m_ui->fowardButton; }
    QToolButton* getReloadButton() { return m_ui->reloadButton; }

    QLineEdit* getInputAddress() { return m_ui->inputAddress; }

protected:
    void paintEvent ( QPaintEvent * event );

private:
    Ui::Toolbar *m_ui;

protected slots:
    void changeUrl();

signals:
    void urlChanged(QString);
};

#endif // TOOLBAR_H
