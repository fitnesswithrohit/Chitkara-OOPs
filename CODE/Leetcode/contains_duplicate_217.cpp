#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
    {
        freq[nums[i]] += 1;
    }

    for (auto x : freq)
    {
        if (x.second >= 2)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<containsDuplicate(nums);

    return 0;
}