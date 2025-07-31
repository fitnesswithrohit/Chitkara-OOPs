#include <bits/stdc++.h>
using namespace std;

//using add and subtract operators
int main()
{
    int a,b;
    cin>>a>>b;

    a = a + b;
    b = a - b;
    a = a - b;
    cout << a <<" "<< b;
}

//using XOR operator
int main()
{
    int a,b;
    cin>>a>>b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a <<" "<< b;
}

// you can swap using swap function also