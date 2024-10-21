#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void change(int *p1){
    // p1++;
    // cout<<p1<<endl;
    (*p)++;
}

int sum(int *arr, int n){ //int arr[]
    // cout<<sizeof(arr)<<endl;
    int ans = 0;
    for(int i=0;i<n;i++){
        ans += arr[i];
    }
    return ans;
}

int main() {
    // int x=8;
    // int *p = &x;
    // // print(p);
    
    // // cout<<p<<endl;
    // // change(p);
    // // cout<<p<<endl;
    
    // cout<<*p<<endl;
    // change(p);
    // cout<<*p<<endl;
    
    int arr[5] = {1,2,3,4,5};
    // cout << sum(arr,5)<<endl;
    // cout<<sizeof(arr)<<endl;
    
    cout << sum(arr+3,2)<<endl;

    return 0;
}