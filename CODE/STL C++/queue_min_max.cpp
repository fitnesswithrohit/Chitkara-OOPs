// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;

int main() {
    queue<int>kyu;
    kyu.push(1);
    kyu.push(2);
    kyu.push(3);
    
    cout<<kyu.front()<<endl;
    cout<<kyu.back()<<endl;
    kyu.pop();
    cout<<kyu.front()<<endl;
    
    // maxheap
    priority_queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    // cout<<q.top()<<endl;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    
    // min-heap
    priority_queue<int, vector<int>, greater<int>>m;
    m.push(4);
    m.push(2);
    m.push(1);
    m.push(3);
    
    // cout<<m.top();
    // while(!m.empty()){
    //     cout<<m.top()<<" ";
    //     m.pop();
    // }
    for(int i=0;i<m.size();i++){
        cout<<m.top()<<" ";
        m.pop();
    }

    return 0;
}