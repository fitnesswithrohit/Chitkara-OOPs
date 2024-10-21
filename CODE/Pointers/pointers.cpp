#include <iostream>
using namespace std;

int main() {
    // int arr[5] = {2,8,4,3,6};
    // for(int i=0;i<5;i++){
    //     // cout<<arr[i]<<" ";
    //     // cout<<*(arr+i)<<" ";
    //     // cout<<i[arr]<<" ";
    //     cout<<*(i+arr)<<" ";
    // }cout<<endl;
    
    // cout<<arr<<endl;
    // int *p = &arr[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    
    int sol[8]= {3,4,6,2,8,1,9,5};
    int *p = &sol[0];
    int **q = &p;
    cout<<sizeof(sol)<<endl;
    cout<<sizeof(*sol)<<endl;
    cout<<sizeof(&sol)<<endl;
    
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    cout<<sizeof(&p)<<endl;
    
    cout<<sol<<endl<<&p<<endl<<(q)<<endl;
    
    // int sol[8] = {3,4,6,2,8,1,9,5};
    // int *p =&sol[0];
    // cout<<*p<<endl;
    // p++;
    // cout<<*p<<endl;
    
    // int sol[5] = {11,2,33,4,5};
    // char ch[] = "rohit";
    // // cout<<sizeof(sol)<<endl;
    // // cout<<sizeof(ch);
    // cout << sol << endl;
    // cout << ch << endl;
    // char *cr = &ch[0];
    // cout<<cr<<endl;
    
    // string s="rohit";
    // string *p = &s;
    // cout<<*p<<endl;
    // cout<<p<<endl;

    return 0;
}

