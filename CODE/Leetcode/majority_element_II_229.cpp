#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> sol;
        // map<int,int> mp;
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }

        for(auto i:mp){
            if(i.second > n/3){
                sol.push_back(i.first);
            }
        }

        return sol;
    }

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> sol = majorityElement(nums);
    for(int i=0;i<sol.size();i++){
        cout<<sol[i]<<" ";
    }
    
    return 0;
}