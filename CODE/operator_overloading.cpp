#include<bits/stdc++.h>
using namespace std;

class Sum{
    public:
    int a,b;
    
    int add(){
        return a+b;
    }

    void operator + (Sum & obj){
        int v = this->a;
        // cout<<"Add of this: "<<this<<endl;
        int u = obj.a;
        // cout<<&obj<<endl;
        cout<<u-v<<endl;
    }
};

int main(){
    Sum A, B;

    A.a = 6;
    B.a = 9;

    A+B;
    // cout<<&A<<endl;
    // cout<<&B<<endl;
    // cout<<"Add of A: "<<&A<<endl;

    // A.b=5;
    cout<<A.add();

    return 0;
}