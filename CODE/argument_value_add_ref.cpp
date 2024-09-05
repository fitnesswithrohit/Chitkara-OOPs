#include<bits/stdc++.h>
using namespace std;

// by value
void add(int n){
    n += 10;
    cout<<n<<endl;
}

// by address
void add1(int *n){
    *n += 10;
    cout<<*n<<endl;
}

// by reference
void add2(int &n){
    n += 10;
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    add(n);
    cout<<n<<endl<<endl;


    int a;
    cin>>a;
    cout<<a<<endl;
    add1(&a);
    cout<<a<<endl<<endl;


    int b;
    cin>>b;
    cout<<b<<endl;
    add2(b);
    cout<<b<<endl;

    return 0;

}