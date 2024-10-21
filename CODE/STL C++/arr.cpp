#include<iostream>
using namespace std;

int main()
{
    array<int,10> arr;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<arr.at(5)<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    cout<<arr.empty()<<endl;
    cout<<arr.size();
}