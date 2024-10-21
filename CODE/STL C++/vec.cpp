#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;

    vector<int> vec2(5,1);
    cout<<endl;
    for(int j:vec2){
        cout<<j<<" ";
    }
    cout<<endl;

    vector<int> vec3(vec2.begin(),vec2.end());
    cout<<endl;
    for(int j:vec3){
        cout<<j<<" ";
    }
    cout<<endl;

    vector<int> vec4(vec3);
    cout<<endl;
    for(int j:vec4){
        cout<<j<<" ";
    }
    cout<<endl;

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(1);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(2);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(3);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(4);
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    vec.push_back(5); 
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;

    for(int i:vec){
        cout<<i<<" ";
    }

    vec.pop_back();
    cout<<endl;
    vec.erase(vec.begin()+1,vec.begin()+3);
    for(int i:vec){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<vec.size()<<endl;
    vec.clear();
    cout<<vec.size()<<endl;
    cout<<vec.empty();

    return 0;
} 