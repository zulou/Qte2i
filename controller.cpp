//#ifndef CONTROLLER_H
//#define CONTROLLER_H
#include<iostream>
using namespace std;

class Controller{
    int Id;
    double Angle;
    double Battery;
    double Temperature;
    string Date;

public:
    Controller(){
        Id=0;
        Angle=0.0;
        Battery=0.0;
        Temperature=0.0;
        Date="01-01-2099";
    }
    Controller(int id,double angle,double battery,double temperature,string date){
        Id=id;
        Angle=angle;
        Battery=battery;
        Temperature=temperature;
        Date=date;
    }
    int getId();
    double getAngle();
    double getBattery();
    double getTemperature();
    string getDate();

    void setId(int id);
    void setAngle(double angle);
    void setBattery(double battery);
    void setTemperature(double temperature);
    void setDate(string date);

    void conexion(int id);




};

int Controller::getId(){
    return Id;
}

double Controller::getAngle(){
    return Angle;
}

double Controller::getBattery(){
    return Battery;
}
double Controller::getTemperature(){
    return Temperature;
}
string Controller::getDate(){
    return Date ;
}


void Controller::setId(int id){
    Id=id;
}

void Controller::setAngle(double angle){
    Angle=angle;
}
void Controller::setBattery(double battery){
    Battery=battery;
}
void Controller::setTemperature(double temperature){
    Temperature=temperature;
}
void Controller::setDate(string date){
    Date=date;
}

void Controller::conexion(int id){

    cout<<"conexion ---->"+to_string(id);
}

//#endif
