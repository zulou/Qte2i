#include "borderlayout.h"
#include "window.h"
#include <QTextBrowser>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QPixmap>
#include <QLabel>

Window::Window()
{
    QTextBrowser *centralWidget = new QTextBrowser;
    centralWidget->setPlainText(tr("Central widget"));

    QPushButton *pushButton=new QPushButton("&ads",this);
    QGroupBox *horizontalGroupBox= new QGroupBox();
    QGroupBox *horizontalGroupBoxsout= new QGroupBox();
    BorderLayout *layout = new BorderLayout;

    //layout->addWidget(centralWidget, BorderLayout::Center);
//############################ botones#######################
    int NumButtons=9;
     QPushButton *buttons[NumButtons];

    QHBoxLayout *HBoxlayout = new QHBoxLayout;

    /*
       for (int i = 0; i < NumButtons; ++i) {
           buttons[i] = new QPushButton(tr("Button %1").arg(i + 1));
           HBoxlayout->addWidget(buttons[i]);
       }
       horizontalGroupBox->setLayout(HBoxlayout);
    */
//############################ Imagenes #######################
       QLabel *LImagenes[8];
       QString url = R"(C:/Users/milro/Documents/BorderLayout/img/145x305.png)";

       QPixmap image(url);


       for (int i = 0; i < 8; ++i) {
           LImagenes[i] = new QLabel(this);
           int w = LImagenes[i]->width();
           int h = LImagenes[i]->height();
           LImagenes[i]->setPixmap(image.scaled(105,222,Qt::KeepAspectRatio));
           HBoxlayout->addWidget(LImagenes[i]);
       }
       horizontalGroupBox->setLayout(HBoxlayout);


//###############imagenes###########
       /*
            QString url = R"(C:/Users/milro/Documents/notepad/105x222.png)";
            QPixmap image(url);

            QLabel *label = new QLabel(this);
            int w = label->width();
            int h = label->height();

            //label->setPixmap(image);
            label->setPixmap(image.scaled(1000,1000,Qt::KeepAspectRatio));
*/
//###############imagenes###########

   QHBoxLayout *HBoxlayoutsout = new QHBoxLayout;

      for (int i = 0; i < NumButtons; ++i) {
          buttons[i] = new QPushButton(tr("Button %1").arg(i + 1));
          HBoxlayoutsout->addWidget(buttons[i]);
      }
      horizontalGroupBoxsout->setLayout(HBoxlayoutsout);
    //
    layout->addWidget(horizontalGroupBox, BorderLayout::Center);
    layout->addWidget(pushButton, BorderLayout::North);
    layout->addWidget(createLabel("West"), BorderLayout::West);
    layout->addWidget(createLabel("East 1"), BorderLayout::East);

    //layout->addWidget(createLabel("South"), BorderLayout::South);
    layout->addWidget(horizontalGroupBoxsout, BorderLayout::South);
    setLayout(layout);

    setWindowTitle(tr("Border Layout"));
}

QLabel *Window::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setFrameStyle(QFrame::Box | QFrame::Raised);
    return label;
}
