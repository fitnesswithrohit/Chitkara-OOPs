#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int temp = mp[target - nums[i]];
        if (mp.find(target - nums[i]) != mp.end())
        {
            return {i, temp};
        }

        mp[nums[i]] = i;
    }
    return {};
}

int main(){
    int n,target;
    cin>>n>>target;

    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> sol = twoSum(nums,target);

    cout<<sol[0]<<" "<<sol[1];

    return 0;
}