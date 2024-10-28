#include <iostream>
#include<list>
using namespace std;

void ite(list<int> g)
{
    list<int>::iterator it=g.begin();
    // for (it = g.begin(); it != g.end(); ++it)
    //     cout << *it;
    
    cout<<*it<<" ";
    it++;
    cout<<*it<<" ";
    it++;
    // while(it != g.end()){
    //     cout << *it<<" ";
    //     it++;
    // }
}

int main() {
    list<int>li;
    li.push_back(1);
    li.push_front(2);
    li.push_front(3);
    
    for(auto i:li){
        cout<<i<<endl;
    }
    
    cout<<li.front()<<endl;
    cout<<li.back()<<endl;
    ite(li);
    
    // for(int i=0;i<li.size();i++){
    //     cout<<li[i]<<endl;
    // }
    // cout<<li[0];
    
    cout<<endl<<endl;
    li.erase(li.begin());
    for(auto i:li){
        cout<<i<<endl;
    }
    
    
    
    // list<int>li1(9,9);
    // for(auto i:li1){
    //     cout<<i<<endl;
    // }

    return 0;
}