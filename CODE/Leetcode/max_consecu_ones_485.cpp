#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            mx = max(mx, count);
            // if(mx<count) {
            //     mx = count;
            // }
        }
        else
        {
            count = 0;
        }
    }
    return mx;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout << findMaxConsecutiveOnes(nums);

    return 0;
}