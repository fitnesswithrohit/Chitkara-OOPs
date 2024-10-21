#include<iostream>
using namespace std;

class Human
{
private:
    int age;
public:
    int height;
    string name;

    int getheight(){
        return this->height;
    }
    int getage(){
        return this->age;
    }
    string getname(){
        return this->name;
    }

    void setheight(int h){
        this->height = h;
    }

    void setage(int a){
        this->age = a;
    }

    void setname(string n){
        this->name = n;
    }
};

class Movies{
    public:
    string movie;

    string getmovie(){
        return this->movie;
    }

    void setmovie(string m){
        this->movie = m;
    }
};

class Male:public Human
{
};

class Female:public Human, public Movies
{
};



int main(){
    Male a;
    a.setage(8);
    cout<<a.getage()<<endl;

    Female b;
    b.setheight(9);
    b.setmovie("Dhoom 3");
    cout<<b.getheight()<<endl;
    cout<<b.getmovie()<<endl;

    return 0;
}