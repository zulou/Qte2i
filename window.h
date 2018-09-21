#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>
//#include "controller.cpp"

class QLabel;

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();




private:
    QLabel *createLabel(const QString &text);
    QPushButton *qconexionButton;
    void createHorizontalGroupBox();

private slots:
    void handleButtonIni();
};

#endif // WINDOW_H
