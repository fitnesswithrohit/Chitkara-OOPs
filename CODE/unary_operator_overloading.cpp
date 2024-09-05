//unary operator overloading
#include <bits/stdc++.h>
using namespace std;

class Change{
    int n1,n2;
    public:
    void set_val(int a, int b);
    void print();
    void operator -();
};

void Change::set_val(int a,int b){
    n1 = a;
    n2 = b;
}

void Change::print(){
    cout<<n1<<endl;
    cout<<n2<<endl;
}

void Change::operator -(){
    // n1 = -n1;
    // n2 = -n2;
    n1--;
    n2--;
}

int main() {
    Change obj;
    obj.set_val(3,4);
    obj.print();
    -obj;
    obj.print();

    return 0;
}