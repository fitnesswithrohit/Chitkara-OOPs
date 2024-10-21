#include<iostream>
using namespace std;

class Human{
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

    void setage(int a){
        this->age = a;
    }

    void print(){
        cout<<"Print Karo"<<endl;
        cout<<this->age<<endl;
        cout<<this->height<<endl;
        cout<<this->name<<endl;
    }

};

class Male: protected Human{
    public:
    int weight;
    
    void ans(){
        cout<<"New print"<<endl;
        // cout<<this->age<<endl;
        cout<<this->height<<endl;
        cout<<this->name<<endl;
    }

    // int getHeight(){
    //     return this->height;
    // }

    // void setHeight(int h){
    //     this->height = h;
    // }
};

int main(){
    // Male a;
    // a.height = 7;
    // a.setHeight(8);
    // cout<<a.getHeight();


    // human a;
    // a.height=7;
    // a.age=21;
    // a.name = "Rohit";
    // a.print();
    
    // male b;
    // b.height=9;
    // b.age=23;
    // b.name="Rahul";
    // b.ans();

    return 0;
}