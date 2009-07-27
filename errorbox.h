#ifndef ERRORBOX_H
#define ERRORBOX_H

#include <QtGui/QWidget>
#include <QPushButton>

namespace Ui {
    class ErrorBox;
}

class ErrorBox : public QWidget {
    Q_OBJECT
public:
    ErrorBox(QWidget *parent = 0);
    ~ErrorBox();
    QPushButton* getRetryButton();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ErrorBox *m_ui;
};

#endif // ERRORBOX_H
