// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int marks;
    cin>>marks;
    
    try{
        if(marks >= 80){
            cout<< "If u r a boy, you will get a gf"<<endl;
            cout<< "If u r a girl, you will get a bf";
        }
        else{
            throw(marks);
        }
    }
    catch(int m){
        cout << "Padhai karle jaake chupchap";
    }

    return 0;
}


// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    
    try{
        if(m==0){
            throw(m);
        }
        else{
            cout << n/m;
        }
    }
    catch(int m){
        cout << "Input is wrong";
    }

    return 0;
}