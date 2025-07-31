#include<iostream>
// #include<array>  // you have to include this header file while using stl array without this header file it will run in vs code only.

using namespace std;

int main()
{
    array<int,5> arr;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<sizeof(arr)<<endl;
    // cout<<arr.at(3)<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;
    // cout<<arr.empty()<<endl;
    // cout<<arr.size();
}