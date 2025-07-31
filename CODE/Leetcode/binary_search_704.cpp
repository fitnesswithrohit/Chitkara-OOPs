#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }

    return -1;
}

int main(){
    int n, target;
    cin>>n>>target;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<search(nums, target);

    return 0;
}