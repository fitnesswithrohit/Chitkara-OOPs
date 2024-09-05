#include<bits/stdc++.h>
using namespace std;

//Function overloading with different number of arguments
// int product(int a,int b){
//     return a*b;
// }

// int product(int a,int b, int c){
//     return a*b*c;
// }

// int main(){
//     cout<<product(10,3)<<endl;
//     cout<<product(10,3,2);
//     return 0;
// }


//Function overloading with different types of arguments
// int product(int a,int b){
//     return a*b;
// }

// double product(double a,double b){
//     return a*b;
// }

// int main(){
//     cout<<product(10,3)<<endl;
//     cout<<product(10.1,10.2);
//     return 0;
// }

//Function overloading with default arguments
int product(int a,int b, int c=1, int d=1){
    return a*b*c*d;
}

int main(){
    cout<<product(10,3)<<endl;
    cout<<product(10,2,3)<<endl;
    cout<<product(10,2,3,4)<<endl;
    return 0;
}