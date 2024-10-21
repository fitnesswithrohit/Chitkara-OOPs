#include <iostream>
using namespace std;

int main() {
    // initialise
    // int *p;
    // p = new int();
    // *p = 12;
    // cout<<*p<<endl;
  
    
    // int *q = new int();
    // *q = 21;
    // cout<<*q<<endl;

    // int *r = new int(34);
    // cout<<*r<<endl;
    
    
    // int x=8;
    // int *p = new int();
    // *p = x;
    
    // (*p)++;
    // cout<<*p<<endl;
    // cout<<x<<endl;
    
    
    // int n=8;
    // int *q = &n;
    
    // (*q)++;
    // cout<<*q<<endl;
    // cout<<n<<endl;
    
    // cout<<&x<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    
    // delete(p);
    // // p=NULL;
    // cout<<p<<endl;
    
    int *p = new int[4];
    for(int i=0;i<4;i++){
        *(p+i) = i+2;
    }
    
    for(int i=0;i<4;i++){
        cout<<*(p+i);
    }
    
    delete p;
    

        

    return 0;
}