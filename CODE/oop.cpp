#include<bits/stdc++.h>
using namespace std;

class Avengers{
    // public:
    int health;
    char level;

    public:
    // Avengers(){
    //     cout<<"Hello constructor"<<endl;
    // }

    Avengers(int health){
        this->health = health;
        cout<<"Add of this: "<<this<<endl;
    }

    Avengers(int health, char level){
        this->health = health;
        this->level = level;
        cout<<"Add of this: "<<this<<endl;
    }

    // int getHealth(){
    //     return health;
    // }

    // char getLevel(){
    //     return level;
    // }

    // void setHealth(int health){
    //     this->health = health;
    // }

    // void setLevel(char level){
    //     this->level = level;
    // }
};

int main(){
    // Avengers temp; // default is dead and no constructor is given for this object.

    Avengers hulk(10);
    // hulk.health = 60;
    // hulk.level = 'A';

    cout<<"Add of hulk: "<<&hulk<<endl;

    Avengers *iron = new Avengers(11);
    Avengers *capton = new Avengers(11, 'B');

    // hulk.setHealth(80);
    // hulk.setLevel('B');

    // cout<<hulk.getHealth()<<" "<<hulk.getLevel()<<endl;
    // cout << sizeof(hulk);

    // Avengers *iron = new Avengers;
    // iron->setHealth(60);
    // iron->setLevel('A');
    // (*iron).setHealth(60);
    // (*iron).setLevel('A');

    // cout<<(*iron).getHealth()<<" "<<(*iron).getLevel()<<endl;
    // cout<<iron->getHealth()<<" "<<iron->getLevel()<<endl;
}