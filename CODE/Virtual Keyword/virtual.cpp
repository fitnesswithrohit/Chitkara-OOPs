// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Teacher{
    public:
    string name;
    double star;
    
    Teacher(string n, double s){
        name = n;
        star = s;
    }
    
    // virtual void print(){
    //     cout<<"original"<<endl;
    // }
    
    virtual void print()=0;//pure virtual function
    
    ~Teacher(){
        cout<<"destruct teacher"<<endl;
    }
    // virtual ~Teacher(){
    //     cout<<"destruct teacher"<<endl;
    // }
};

class Girl:public Teacher{
    public:
    string gname;
    
    Girl(string n, double s, string g):Teacher(n,s){
        gname = g;
    }
    
    void print(){
        cout<<gname<<endl;
        cout<<name<<endl;
        cout<<star<<endl;
    }
    
    ~Girl(){
        cout<<"destruct girl"<<endl;
    }
};

class Boy:public Teacher{
    public:
    string bname;
    
    Boy(string n, double s, string b):Teacher(n,s){
        bname = b;
    }
    
    void print(){
        cout<<bname<<endl;
        cout<<name<<endl;
        cout<<star<<endl;
    }
    
    ~Boy(){
        cout<<"destruct boy"<<endl;
    }
};

int main() {
    string n,g,b;
    double s;
    cin>>n>>g>>s;
    
    // Girl st1(n,s,g);
    // st1.print();
    // cout<<endl;
    
    // cin>>n>>b>>s;
    // Boy st2(n,s,b);
    // st1.print();
    
    // Teacher *p;
    // p = &st1;
    // (*p).print();
    
    
    Teacher *r = new Girl(n,s,g);
    r->print();
    
    delete r;
    // Teacher *q;
    // q = &st2;
    // (*q).print();
    
    

    return 0;
}