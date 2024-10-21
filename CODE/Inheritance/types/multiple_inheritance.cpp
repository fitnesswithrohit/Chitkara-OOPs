#include<iostream>
using namespace std;

class Father
{
public:
    int height;
    int weight;

public:
    int getheight(){
        return this->height;
    }
    int getweight(){
        return this->weight;
    }

    void setheight(int h){
        this->height = h;
    }
    void setweight(int w){
        this->weight = w;
    }

    Father(/* args */);
    ~Father();
};

class Mother
{
public:
    string eyes;

public:
    string geteyes(){
        return this->eyes;
    }

    void seteyes(string e){
        this->eyes = e;
    }
};

class Child:public Father, public Mother
{
};

Father::Father(/* args */)
{
    cout<<"Print karo"<<endl;
}

Father::~Father()
{
    cout<<"Destructor called"<<endl;
}


int main(){
    Child boy;
    boy.setheight(13);
    boy.seteyes("Brown");
    cout<<boy.getheight()<<endl;
    cout<<boy.geteyes()<<endl;
    return 0;
}