// Create program to check if two numbers are equal without using arithmetic
// operators comparison operators.
// Sample test case:
// Input: 5 5
// Output: x is equal to y

#include<bits/stdc++.h>
using namespace std;

class Equal{
    int n1, n2;

    public:
    Equal(int x, int y){
        n1 = x;
        n2 = y;
    }

    bool check(){
        return n1^n2;
    }

    void print(){
        if (!check()) {
            cout << "x is equal to y" << endl;
        } else {
            cout << "x is not equal to y" << endl;
        }
    }
};

int main(){
    Equal obj(4,4);
    obj.print();
    
    return 0;
}