// When we create objects using the variables of primary data types then it is called as basic to class type conversion.
// Generally we use single argument constructor to perform type conversion from basic type to class type.
#include <bits/stdc++.h>
using namespace std;

class Change{
    int a;
    public:
    // Change(int n){
    //     a = n;
    // }

    void print(){
        cout<<a;
    }
};

int main() {
    Change obj=40;
    obj.print();

    return 0;
}