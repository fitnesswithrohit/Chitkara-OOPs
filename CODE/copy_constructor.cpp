#include<bits/stdc++.h>
using namespace std;

class Avengers{
    // public:
    int health;
    char level;

    public:
    char *name;
    // string name;

    Avengers(){
        cout<<"Hello constructor"<<endl;
        name = new char[100];
    }

    Avengers(int health){
        this->health = health;
        cout<<"Add of this: "<<this<<endl;
    }

    Avengers(int health, char level){
        this->health = health;
        this->level = level;
        cout<<"Add of this: "<<this<<endl;
    }

    //copy constructor created by us
    // Avengers(Avengers& copy){ //shallow copy
    //     cout<<"Copy constructor hai kya: "<<endl;
    //     this->name = copy.name;
    //     this->health = copy.health;
    //     this->level = copy.level;
    // }

    Avengers(Avengers& copy){ // Deep Copy
        // char *name = new char[100];
        char *arr = new char[strlen(copy.name)+1];
        strcpy(arr, copy.name);
        this->name = arr;

        // string str = copy.name;

        cout<<"Copy constructor hai kya: "<<endl;
        // this->name = str;
        this->health = copy.health;
        this->level = copy.level;
    }

    void print(){
        cout<<endl;
        cout<<"name: "<<this->name<<endl;
        cout<<"health: "<<this->health<<endl;
        cout<<"level: "<<this->level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int health){
        this->health = health;
    }

    void setLevel(char level){
        this->level = level;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    ~Avengers(){
        cout<<"Destructor hai kya."<<endl;
    }
};

int main(){


    
    // Avengers doctor(70, 'A');
    // doctor.print();

    // Avengers iron(doctor);
    // iron.print();

    // Avengers hulk;
    // hulk.setHealth(80);
    // hulk.setLevel('A');
    // char name[8] = "Rohit";
    // hulk.setName(name);

    // hulk.name="Rohit";

    // hulk.print();

    //use default constructor
    // Avengers thor(hulk);
    // Avengers thor = hulk;
    // thor.print();

    // hulk.name[0] = 'M';
    // hulk.print();

    // thor.name[0] = 'S';

    // thor.print(); // this means deafult copy constructor SHALLOW Copy karta hai.
    
    // copy assignment operator 
    // hulk = thor;
    // hulk.print();
    // thor.print();


    //Destructor - memory deallocation
    //1. Static allocation dwara created object ke liye destructor automatically call hota hai
    //2. Dynamic allocation mai menually karna hota h ,. delete objectname
    // Avengers *spider = new Avengers();
    // manualy destructor call 
    // delete spider;

}