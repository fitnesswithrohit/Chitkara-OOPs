#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> m;

    for (int i = 0; i < n; ++i)
    {
        if (m[nums[i]] != 0)
        {
            if (i - m[nums[i]] + 1 <= k)
                return true;
            else
                m[nums[i]] = i + 1;
        }
        else
        {
            m[nums[i]] = i + 1;
        }
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << containsNearbyDuplicate(nums, k);

    return 0;
}