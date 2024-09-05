// String manipulation using Binary opeartor
#include <bits/stdc++.h>
using namespace std;

class Add{
    public:
    char a1[50];
    Add(){}
    Add(char n[]){
        strcpy(a1, n);
    }
    
    Add operator+(Add& obj){
        Add obj3;
        strcat(this->a1, obj.a1);
        strcpy(obj3.a1, this->a1);
        return obj3;
    }
};

int main() {
    char n[] = "Rohit ";
    char m[] = "Sharma";
    Add obj1(n);
    Add obj2(m);
    Add obj3;
    obj3 = obj1 + obj2;
    cout<<obj3.a1;

    return 0;
}