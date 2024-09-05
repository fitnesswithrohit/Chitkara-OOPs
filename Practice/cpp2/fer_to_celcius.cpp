#include<iostream>
#include<iomanip>
using namespace std;

class Convert{
    double feh;
    public:
    Convert(double f){
        feh = f;
    }

    double change(){
        double cel = (feh - 32)/(1.8);
        return cel;
    }

    void print(){
        double ans = change();
        cout << feh<<endl;
        cout<<fixed<<setprecision(5)<<ans<<endl;
    }
};

int main(){
    Convert obj(75.0);
    obj.print();
    
    return 0;
}