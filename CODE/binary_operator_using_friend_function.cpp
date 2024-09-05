//binary operator using friend function
#include <bits/stdc++.h>
using namespace std;

class Change{
    int n;
    public:
    void set_val(int a){
        n = a;
    }
    
    void print(){
        cout<<n<<endl;
    }
    
    friend Change operator *(Change, Change);
};

Change operator *(Change obj1, Change obj2){
    Change obj3;
    obj3.n = obj1.n+obj2.n;
    return obj3;
}

int main() {
    Change obj1,obj2;
    obj1.set_val(4);
    obj2.set_val(6);
    Change obj3;
    obj3 = obj1*obj2;
    obj3.print();

    return 0;
}