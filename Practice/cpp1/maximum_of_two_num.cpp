// Write a program to find maximum and minimum of two numbers without
// using loop and any condition.
// Sample test case:
// Input: 17 19
// Output: max = 19
//         min = 17
#include<bits/stdc++.h>
using namespace std;

class Find{
    int n1, n2;

    public:
    Find(int x, int y){
        n1 = x;
        n2 = y;
    }

    int max_num(){
        return (n1 + n2 + abs(n1-n2))/2;
    }

    int min_num(){
        return (n1 + n2 - abs(n1-n2))/2;
    }

    void print(){
        cout<<"Max: "<<max_num()<<endl;
        cout<<"Min: "<<min_num()<<endl;
    }
};

int main(){
    Find obj(4,5);
    obj.print();
    
    return 0;
}