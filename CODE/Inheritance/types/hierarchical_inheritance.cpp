#include<iostream>
using namespace std;

class Human
{
private:
    int age;
public:
    int height;
    int weight;

public:
    int getage(){
        return this->age;
    }
    int getheight(){
        return this->height;
    }
    int getweight(){
        return this->weight;
    }

    void setheight(int h){
        this->height = h;
    }
    void setage(int a){
        this->age = a;
    }
    void setweight(int w){
        this->weight = w;
    }

    Human(/* args */);
    ~Human();
};

class Male:public Human
{
};

class Female:public Human
{
};

class Boy:public Male
{
};

class Old:public Male
{
};

class NewBorn:public Male
{
};

class Girl:public Female
{
};

class Lady:public Female
{
};

Human::Human(/* args */)
{
    cout<<"Print karo"<<endl;
}

Human::~Human()
{
    cout<<"Destructor called"<<endl;
}


int main(){
    Boy a;
    a.setage(13);
    cout<<a.getage()<<endl;
    return 0;
}