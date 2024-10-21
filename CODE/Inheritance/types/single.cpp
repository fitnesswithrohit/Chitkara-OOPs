#include<iostream>
using namespace std;

class Father
{
// public:
private:
    int height;
    string bodypart;

    public:
    int getheight(){
        return this->height;
    }
    string getbodypart(){
        return this->bodypart;
    }

    void setheight(int height){
        this->height = height;
    }

    void setbodypart(string bodypart){
        this->bodypart = bodypart;
    }

    Father(/* args */);
    ~Father();
};

Father::Father(/* args */)
{
    cout<<"Constructor called"<<endl;
}

Father::~Father()
{
    cout<<"Destructor called"<<endl;
}

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


int main(){
    Beta rohit;
    rohit.setheight(7);
    cout<<rohit.getheight()<<endl;
    return 0;
}