// When we assign an object to a primitive data type's variable, then it is called as class type to basic conversion.
// To perform class type to basic type conversion we have to define the casting operator function.
// The casting operator function must be a member of the class.
// The casting operator function cannot have any return datatype and it does not take any parameter.
#include <bits/stdc++.h>
using namespace std;

class Change{
    int a;
    public:
    Change(int n){
        a = n;
    }

    void print(){
        cout<<a<<endl;
    }

    // operator datatype(){} //syntax of Casting operator function
    operator int(){
        return a;
    }
};

int main() {
    Change obj=40;
    obj.print();

    int sol = obj;
    cout<<sol<<endl;

    return 0;
}