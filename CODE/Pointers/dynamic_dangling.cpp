#include <iostream>
using namespace std;

int main() {
    int *p = new int[4];
    for(int i=0;i<4;i++){
        *(p+i) = i+2;
    }
    
    cout<<p<<endl;
    for(int i=0;i<4;i++){
        cout<<*(p+i)<<endl;
    }
    
    cout<<p<<endl;
    delete p;
    p=NULL;
    cout<<p<<endl;

    p++;
    cout<<*p<<endl;

    return 0;
}

// Resolve dangling problem
// 1. use NULL pointer 

// 2. Smart pointer

// #include <bits/stdc++.h>
// // #include <memory>
// using namespace std;

// shared_ptr<int> getSmartPtr()
// {
//     return make_shared<int>(23);
// }

// int main()
// {
//     shared_ptr<int> ptr = getSmartPtr();
//     cout <<*ptr<< endl;
//     return 0;
// }
