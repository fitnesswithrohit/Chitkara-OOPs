#include<bits/stdc++.h>
using namespace std;

class Avengers{
    // public:
    int health;
    char level;

    public:
    char *name;
    static int power;

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
    // yha per hume "pass by reference karna hoga because pass by value karne par infinite loop chalega
    // Avengers(Avengers& copy){
    //     cout<<"Copy constructor hai kya: "<<endl;
    //     this->health = copy.health;
    //     this->level = copy.level;
    // }

    Avengers(Avengers& copy){ // changes in copy constructor for DEEP COPY
        char *arr = new char[strlen(copy.name)+1];
        strcpy(arr, copy.name);
        this->name = arr;

        cout<<"Copy constructor hai kya: "<<endl;
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

    // static function
    static int access(){
        // return this->health;
        // return health;
        return power;
    }

    ~Avengers(){
        cout<<"Destructor hai kya."<<endl;
    }
};

//static kew word
int Avengers::power = 60;

int main(){
    //static funtion
    cout<<Avengers::access()<<endl;
    // cout << Avengers::power<<endl;



    // Avengers hulk;
    // cout << hulk.power<<endl;

    // Avengers iron;
    // iron.power = 89;
    // cout << hulk.power<<endl;
    // cout << iron.power<<endl;
}