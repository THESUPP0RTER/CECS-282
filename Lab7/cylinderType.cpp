#include <iostream>
#include "cylinderType.h"
using namespace std;
void cylinderType::print() const{
    cout << "Base Center: ("<<getX()<<", "<<getY()<<")\n"<<endl;
    cout << "Base Radius: "<< getRadius()<<endl;
    cout << "Base Circumference: "<<getCircumference()<<endl;
    cout << "Base Area: "<< getArea()<<endl;
    cout << "Cylinder Height: "<<height<<endl;
    cout << "Cylinder Surface Area: "<<getSurfaceArea()<<endl;
    cout << "Cylinder Volume: "<<getVolume()<<endl;
}

void cylinderType::setHeight(double h){
   height = h;
}
void cylinderType::setBaseCenter(double x, double y){
   setPoint(x,y);
}
void cylinderType::setCenterRadiusHeight(double x, double y,
    double r, double h){
    setPoint(x,y);
    setRadius(r);
    setHeight(h);
}

double cylinderType::getHeight() const{
   return height;
}
double cylinderType::getVolume() const{
   return 3.1416 * getRadius()*getRadius()*height;
}
double cylinderType::getSurfaceArea() const{
   return getCircumference()*(getHeight()+getRadius());
}
cylinderType::cylinderType(double x, double y ,double r , double h):circleType(x,y,r){
   setHeight(h);
}
