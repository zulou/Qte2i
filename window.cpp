#include "borderlayout.h"
#include "window.h"
#include "controller.cpp"
#include <QString>
#include <string>
#include <QTextBrowser>
#include <QPushButton>
#include <QLabel>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QPixmap>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QMenu>
#include <QDateTime>


Window::Window()
{
    QTextBrowser *centralWidget = new QTextBrowser;
    centralWidget->setPlainText(tr("Central widget"));
    QMenu *settingsMenu;
    QMenu *HelpMenu;

    QPushButton *pushButton=new QPushButton("&ads",this);
    QGroupBox *horizontalGroupBox= new QGroupBox();
    QHBoxLayout *HBoxlayout = new QHBoxLayout;    

    BorderLayout *layout = new BorderLayout;
    QString url = R"(C:/Users/milro/Documents/BorderLayout/img/16.png)";
    QLabel *LImagenes1;
    QLabel *LImagenes2;
    QLabel *LImagenes3;
    QLabel *LImagenes4;
    QLabel *LImagenes5;
    QLabel *LImagenes6;
    QLabel *LImagenes7;
    QLabel *LImagenes8;

    QLabel *labelsId1;
    QLabel *labelsId2;
    QLabel *labelsId3;
    QLabel *labelsId4;
    QLabel *labelsId5;
    QLabel *labelsId6;
    QLabel *labelsId7;
    QLabel *labelsId8;

    QLabel *labelsT1;
    QLabel *labelsT2;
    QLabel *labelsT3;
    QLabel *labelsT4;
    QLabel *labelsT5;
    QLabel *labelsT6;
    QLabel *labelsT7;
    QLabel *labelsT8;

    QLabel *labelsB1;
    QLabel *labelsB2;
    QLabel *labelsB3;
    QLabel *labelsB4;
    QLabel *labelsB5;
    QLabel *labelsB6;
    QLabel *labelsB7;
    QLabel *labelsB8;

    QLabel *labelsA1;
    QLabel *labelsA2;
    QLabel *labelsA3;
    QLabel *labelsA4;
    QLabel *labelsA5;
    QLabel *labelsA6;
    QLabel *labelsA7;
    QLabel *labelsA8;

    QLabel *labelsD1;
    QLabel *labelsD2;
    QLabel *labelsD3;
    QLabel *labelsD4;
    QLabel *labelsD5;
    QLabel *labelsD6;
    QLabel *labelsD7;
    QLabel *labelsD8;

    //QPushButton *qconexionButton;



    QGroupBox *gridGroupBox = new QGroupBox();
    QGridLayout *Glayout = new QGridLayout;

    Controller c1,c2,c3,c4,c5,c6,c7,c8;
    QPixmap image(url);


    LImagenes1 = new QLabel(this);
    LImagenes2 = new QLabel(this);
    LImagenes3 = new QLabel(this);
    LImagenes4 = new QLabel(this);
    LImagenes5 = new QLabel(this);
    LImagenes6 = new QLabel(this);
    LImagenes7 = new QLabel(this);
    LImagenes8 = new QLabel(this);
    //int w = LImagenes1->width();
    //int h = LImagenes1->height();
    int w=300;
    int h=600;
    LImagenes1->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes2->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes3->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes4->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes5->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes6->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes7->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    LImagenes8->setPixmap(image.scaled(h,w,Qt::KeepAspectRatio));
    HBoxlayout->addWidget(LImagenes1);
    HBoxlayout->addWidget(LImagenes2);
    HBoxlayout->addWidget(LImagenes3);
    HBoxlayout->addWidget(LImagenes4);
    HBoxlayout->addWidget(LImagenes5);
    HBoxlayout->addWidget(LImagenes6);
    HBoxlayout->addWidget(LImagenes7);
    HBoxlayout->addWidget(LImagenes8);
    horizontalGroupBox->setLayout(HBoxlayout);
    ///############ID#####################

    string Id="";
    QString qId;

    Id=to_string(c1.getId());
    qId=QString::fromStdString(Id);
    labelsId1 = new QLabel("Id:"+qId);

    Id=to_string(c2.getId());
    qId=QString::fromStdString(Id);
    labelsId2 = new QLabel("Id:"+qId);


    Id=to_string(c3.getId());
    qId=QString::fromStdString(Id);
    labelsId3 = new QLabel("Id:"+qId);

    Id=to_string(c4.getId());
    qId=QString::fromStdString(Id);
    labelsId4 = new QLabel("Id:"+qId);

    Id=to_string(c5.getId());
    qId=QString::fromStdString(Id);
    labelsId5 = new QLabel("Id:"+qId);

    Id=to_string(c6.getId());
    qId=QString::fromStdString(Id);
    labelsId6 = new QLabel("Id:"+qId);

    Id=to_string(c7.getId());
    qId=QString::fromStdString(Id);
    labelsId7 = new QLabel("Id:"+qId);

    Id=to_string(c8.getId());
    qId=QString::fromStdString(Id);
    labelsId8 = new QLabel("Id:"+qId);


    Glayout->addWidget(labelsId1, 1, 1);
    Glayout->addWidget(labelsId2, 1, 2);
    Glayout->addWidget(labelsId3, 1, 3);
    Glayout->addWidget(labelsId4, 1, 4);
    Glayout->addWidget(labelsId5, 1, 5);
    Glayout->addWidget(labelsId6, 1, 6);
    Glayout->addWidget(labelsId7, 1, 7);
    Glayout->addWidget(labelsId8, 1, 8);


    ///############Temperature############

        string Temperature="";
        QString qTemperature;

        Temperature=to_string(c1.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT1 = new QLabel("Temperatura:"+qTemperature);


        Temperature=to_string(c2.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT2 = new QLabel("Temperatura:"+qTemperature);


        Temperature=to_string(c3.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT3 = new QLabel("Temperatura:"+qTemperature);

        Temperature=to_string(c4.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT4 = new QLabel("Temperatura:"+qTemperature);

        Temperature=to_string(c5.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT5 = new QLabel("Temperatura:"+qTemperature);

        Temperature=to_string(c6.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT6 = new QLabel("Temperatura:"+qTemperature);

        Temperature=to_string(c7.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT7= new QLabel("Temperatura:"+qTemperature);

        Temperature=to_string(c8.getTemperature());
        qTemperature=QString::fromStdString(Temperature);
        labelsT8= new QLabel("Temperatura:"+qTemperature);



        Glayout->addWidget(labelsT1, 2, 1);
        Glayout->addWidget(labelsT2, 2, 2);
        Glayout->addWidget(labelsT3, 2, 3);
        Glayout->addWidget(labelsT4, 2, 4);
        Glayout->addWidget(labelsT5, 2, 5);
        Glayout->addWidget(labelsT6, 2, 6);
        Glayout->addWidget(labelsT7, 2, 7);
        Glayout->addWidget(labelsT8, 2, 8);


        ///#############Bateria##################

        string Battery="";
        QString qBattery;

        Battery=to_string(c1.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB1 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c2.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB2 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c3.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB3 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c4.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB4 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c5.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB5 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c6.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB6 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c7.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB7 = new QLabel("Bateria:"+qBattery);


        Battery=to_string(c8.getBattery());
        qBattery=QString::fromStdString(Battery);
        labelsB8 = new QLabel("Bateria:"+qBattery);


        Glayout->addWidget(labelsB1, 3, 1);
        Glayout->addWidget(labelsB2, 3, 2);
        Glayout->addWidget(labelsB3, 3, 3);
        Glayout->addWidget(labelsB4, 3, 4);
        Glayout->addWidget(labelsB5, 3, 5);
        Glayout->addWidget(labelsB6, 3, 6);
        Glayout->addWidget(labelsB7, 3, 7);
        Glayout->addWidget(labelsB8, 3, 8);

        ///

        ///##############Angulo###############
        string Angle="";
        QString qAngle;

        Angle=to_string(c1.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA1 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c2.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA2 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c3.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA3 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c4.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA4 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c5.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA5 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c6.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA6 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c7.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA7 = new QLabel("Angulo:"+qAngle);

        Angle=to_string(c8.getAngle());
        qAngle=QString::fromStdString(Angle);
        labelsA8 = new QLabel("Angulo:"+qAngle);

        Glayout->addWidget(labelsA1, 4, 1);
        Glayout->addWidget(labelsA2, 4, 2);
        Glayout->addWidget(labelsA3, 4, 3);
        Glayout->addWidget(labelsA4, 4, 4);
        Glayout->addWidget(labelsA5, 4, 5);
        Glayout->addWidget(labelsA6, 4, 6);
        Glayout->addWidget(labelsA7, 4, 7);
        Glayout->addWidget(labelsA8, 4, 8);
        ///

        ///#############FECHA#################
        string Date="";
        QString qDate;

        Date=c1.getDate();
        qDate=QString::fromStdString(Date);
        labelsD1 = new QLabel("Fecha:"+qDate);


        Date=c2.getDate();
        qDate=QString::fromStdString(Date);
        labelsD2 = new QLabel("Fecha:"+qDate);


        Date=c3.getDate();
        qDate=QString::fromStdString(Date);
        labelsD3 = new QLabel("Fecha:"+qDate);


        Date=c4.getDate();
        qDate=QString::fromStdString(Date);
        labelsD4 = new QLabel("Fecha:"+qDate);


        Date=c5.getDate();
        qDate=QString::fromStdString(Date);
        labelsD5 = new QLabel("Fecha:"+qDate);


        Date=c6.getDate();
        qDate=QString::fromStdString(Date);
        labelsD6 = new QLabel("Fecha:"+qDate);


        Date=c7.getDate();
        qDate=QString::fromStdString(Date);
        labelsD7 = new QLabel("Fecha:"+qDate);


        Date=c8.getDate();
        qDate=QString::fromStdString(Date);
        labelsD8 = new QLabel("Fecha:"+qDate);


        Glayout->addWidget(labelsD1, 5, 1);
        Glayout->addWidget(labelsD2, 5, 2);
        Glayout->addWidget(labelsD3, 5, 3);
        Glayout->addWidget(labelsD4, 5, 4);
        Glayout->addWidget(labelsD5, 5, 5);
        Glayout->addWidget(labelsD6, 5, 6);
        Glayout->addWidget(labelsD7, 5, 7);
        Glayout->addWidget(labelsD8, 5, 8);


        ///
        qconexionButton=new QPushButton("Iniciar", this);
        //qconexionButton->setMaximumSize(100,20);
        //qconexionButton->setMinimumSize(100,20);
        //qconexionButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        qconexionButton->setGeometry(QRect( QPoint(200, 200),QSize(10, 10) ));
        Glayout->addWidget(qconexionButton,6,4);

        connect(qconexionButton, SIGNAL (released()),this, SLOT (handleButtonIni()));





        //QTextEdit *smallEditor = new QTextEdit;
        //smallEditor->setPlainText(tr("This widget takes up about two thirds of the "                                     "grid layout."));
        //Glayout->addWidget(smallEditor, 0, 2, 4, 1);

        //Glayout->setColumnStretch(0, 50);
        //Glayout->setColumnStretch(2, 2);

        gridGroupBox->setLayout(Glayout);

    ///






    layout->addWidget(horizontalGroupBox, BorderLayout::Center);
    //layout->addWidget(gridGroupBox, BorderLayout::Center);
    layout->addWidget(pushButton, BorderLayout::North);
    layout->addWidget(createLabel("West"), BorderLayout::West);
    layout->addWidget(createLabel("East 1"), BorderLayout::East);

    //layout->addWidget(createLabel("South"), BorderLayout::South);
    //layout->addWidget(horizontalGroupBoxsout, BorderLayout::South);
    layout->addWidget(gridGroupBox, BorderLayout::South);
    setLayout(layout);

    setWindowTitle(tr("Main"));
}

QLabel *Window::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setFrameStyle(QFrame::Box | QFrame::Raised);
    return label;
}
void Window::handleButtonIni()
 {

     //change the text
    //string a=to_string(contrs.getBattery());

    //QString qs=QString::fromStdString(a);
     qconexionButton->setText("aaaaaaaaaaaaaa");

     //resize button
     //qconexionButton->resize(100,100);
 }


