#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_front(0);

    for(int i:d){
        cout<<i<<" ";
    }

    // cout<<endl;
    // for(int i=0;i<d.size();i++){
    //     cout<<d[i]<<" ";
    // }

    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl;

    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;
    // cout<<d.at(2)<<endl;

    // cout<<d.empty()<<endl;
    cout<<d.size()<<endl;

    d.erase(d.begin(),d.begin()+2);
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<d.size();

    return 0;
}