#include <iostream>
using namespace std;

class P{
    public:
    virtual void print(){
        cout<<"Parent class"<<endl;
    }
};

class C:public P{
    public:
    void print(){
        cout<<"Child class"<<endl;
    }
};

int main() {
    // C obj;
    // obj.print();
    
    // P *p;
    // C obj;
    // p = &obj;
    // p->print();
    
    P *p = new C;
    p->print();

    return 0;
}