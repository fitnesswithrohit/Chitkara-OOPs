#include<iostream>
#include<iomanip>
using namespace std;
class Shape{
    public:
    double radius;
    double height;
    Shape(){};
    virtual void Volume()=0;
};
class Sphere:public Shape{
    public:
    Sphere(double r){
        radius=r;
    }
    void Volume(){
        double volume=4.0/3.0*3.1321389 *radius*radius*radius;
        cout<<"Volume of sphere is "<<fixed<<setprecision(3)<<volume<<endl;
    }
};
class Cylinder:public Shape{
    public:
    Cylinder(double r,double h){
        radius=r;
        height=h;
    }
    void Volume(){
        double volume=3.14*radius*radius*height;
        cout<<"Volume of cylinder is "<<fixed<<setprecision(3)<<volume<<endl;
    }
};
int main()
{
    double choice;
    double radius;
    double height;
    cin>>choice;
    if(choice==1){
        cin>>radius;
        Sphere s(radius);
        s.Volume();
    }
    else if(choice==2){
        cin>>radius;
        cin>>height;
        Cylinder c(radius,height);
        c.Volume();
    }
    else{
        cout<<"wrong choice"<<endl;
    }
}