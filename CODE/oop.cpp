#include<bits/stdc++.h>
using namespace std;

class Avengers{
    // public:
    private:
    int health;
    char level;

    public:
    Avengers(){
        cout<<"Hello constructor"<<endl;
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
};

int main(){


    // Avengers temp; // default is dead and no constructor is given for this object.
    // temp.health = 67;
    // cout<<temp.health;
    // Avengers hulk(10,'A');
    // // hulk.health = 60;
    // // hulk.level = 'A';
    // cout<<hulk.health<<endl;
    // cout<<hulk.level<<endl;

    // cout<<"Add of hulk: "<<&hulk<<endl;

    // Avengers capt;
    // capt.setHealth(34);
    // capt.setLevel('S');
    // cout<<capt.getHealth()<<endl;
    // cout<<capt.getLevel()<<endl;

    
    // Avengers *iron = new Avengers;
    // Avengers *capton = new Avengers(11, 'B');

    // (*iron).setHealth(80);
    // (*iron).setLevel('B');

    // cout<<(*iron).getHealth()<<" "<<(*iron).getLevel()<<endl;
    // cout << sizeof(*iron);

    // Avengers *iron = new Avengers;
    // iron->setHealth(60);
    // iron->setLevel('A');
    // (*iron).setHealth(60);
    // (*iron).setLevel('A');

    // cout<<(*iron).getHealth()<<" "<<(*iron).getLevel()<<endl;
    // cout<<iron->getHealth()<<" "<<iron->getLevel()<<endl;
}