#include "borderlayout.h"
#include "window.h"
#include <QTextBrowser>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>

Window::Window()
{
    QTextBrowser *centralWidget = new QTextBrowser;
    centralWidget->setPlainText(tr("Central widget"));

    QPushButton *pushButton=new QPushButton("&ads",this);
    QGroupBox *horizontalGroupBox;

    BorderLayout *layout = new BorderLayout;
    layout->addWidget(centralWidget, BorderLayout::Center);

    layout->addWidget(pushButton, BorderLayout::North);
    layout->addWidget(createLabel("West"), BorderLayout::West);
    layout->addWidget(createLabel("East 1"), BorderLayout::East);
    layout->addWidget(createLabel("East 2") , BorderLayout::East);
    layout->addWidget(createLabel("South"), BorderLayout::South);
    setLayout(layout);

    setWindowTitle(tr("Border Layout"));
}

QLabel *Window::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setFrameStyle(QFrame::Box | QFrame::Raised);
    return label;
}
