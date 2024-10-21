#include<iostream>
using namespace std;

class Father
{
public:
    int height;
    string bodypart;

    public:
    int getheight(){
        return this->height;
    }
    string getbodypart(){
        return this->bodypart;
    }

    void setheight(int h){
        this->height = h;
    }

    void setbodypart(string s){
        this->bodypart = s;
    }

    // Father(/* args */);
    // ~Father();
};

// Father::Father(/* args */)
// {
//     cout<<"Constructor called"<<endl;
// }

// Father::~Father()
// {
//     cout<<"Destructor called"<<endl;
// }

class Beta : public Father{
    public:
    char bloodGroup;

    char getbloodGroup(){
        return this->bloodGroup;
    }

    void setblodGroup(char b){
        this->bloodGroup = b;
    }
};

class BeteKaBeta : public Beta{

};


int main(){
    BeteKaBeta rohit;
    rohit.setheight(7);
    cout<<rohit.getheight()<<endl;
    return 0;
}