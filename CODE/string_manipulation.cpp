//String manipulation using unary opeartor
#include <bits/stdc++.h>
using namespace std;

class Add{
    public:
    char a1[50], a2[50];
    Add(char n[], char m[]){
        strcpy(a1, n);
        strcpy(a2, m);
    }
    
    void operator + (){
        cout<<strcat(a1,a2);
    }
};

int main() {
    char n[] = "Rohit ";
    char m[] = "Sharma";
    Add obj(n,m);
    +obj;

    return 0;
}