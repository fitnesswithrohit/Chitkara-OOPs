#include<bits/stdc++.h>
using namespace std;

class A{
    int a=23;
    int b=10;
    public:
    void print(){
        cout<<a<<" "<<b<<endl;
    }

    friend class B;
};

class B{
    public:
    void add(A p){
        int sum = p.a + p.b;
        cout << sum;
    }
};

int main(){
    A obj1;
    obj1.print();
    B obj2;
    obj2.add(obj1);
}