#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec; // vector becomes double of its size when we add new element after vector is full.
    // cout<<sizeof(vec)<<endl;

    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    vec.push_back(1);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    vec.push_back(2);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    vec.push_back(3);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    vec.push_back(4);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    vec.push_back(5); 
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;

    // cout<<vec.front()<<endl;
    // cout<<vec.back()<<endl;

    // for(auto i:vec){ // for each loop 
    //     cout<<i<<" ";
    // }

    // vec.pop_back();
    // cout<<endl;
    // vec.erase(vec.begin()+1,vec.begin()+3);
    // for(int i:vec){
    //     cout<<i<<" ";
    // }

    // cout<<endl;
    // cout<<vec.size()<<endl;
    // cout<<sizeof(vec)<<endl;
    // vec.clear();
    // cout<<vec.size()<<endl;
    // cout<<vec.empty()<<endl;

    // vector<int> vec2(5,7);
    
    // for(int j:vec2){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // vector<int> vec3(vec2.begin(),vec2.end());
    // cout<<endl;
    // for(int j:vec3){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // vector<int> vec4(vec3);
    // cout<<endl;
    // for(int j:vec4){
    //     cout<<j<<" ";
    // }
    // cout<<endl;

    // vector<datatype> name of data structure
    // list<datatype> name of data structure
    // set<datatype> name of data structure
    // stack<datatype> name of data structure
    // queue<datatype> name of data structure
    // priority_queue<datatype> name of data structure


    // iterator
    // vector<int> check;
    // check.push_back(5);
    // check.push_back(6);
    // check.push_back(7);

    // vector<int>::iterator it = check.begin();
    // vector<int>::iterator en = check.end();
    // while(it != en){
    //     cout<<*it<<" ";
    //     it++;
    // }

    return 0;
} 