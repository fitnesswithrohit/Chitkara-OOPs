#include <iostream>
using namespace std;

void change(int *p){
    // cout<<*p<<endl;
    // p++; 
    (*p)++;
}

int main() {
    int n=7;
    int *p = new int;
    // p = &n; // this will give warning
    *p = n; // this will not give warning
    cout<<&n<<endl;
    cout<<*p<<endl;
    change(p);
    cout<<*p<<endl;
    cout<<n<<endl;
    
    delete p;
    cout<<*p<<endl;
    
    return 0;
}

