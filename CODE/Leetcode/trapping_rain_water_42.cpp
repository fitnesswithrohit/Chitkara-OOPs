#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int n = height.size();
    int sol = 0;
    if (height.empty())
        return 0;

    vector<int> left_max(n), right_max(n);
    left_max[0] = height[0]; // 4 4 4 4 4 5

    for (int i = 1; i < n; i++) // 4 2 0 3 2 5
    {
        left_max[i] = max(height[i], left_max[i - 1]);
        // cout << left_max[i] << " ";
    }
    // cout << endl;
    right_max[n - 1] = height[n - 1]; // 5 5 5 5 5 5
    for (int i = n - 2; i >= 0; i--)  //
    {
        right_max[i] = max(height[i], right_max[i + 1]);
        // cout << right_max[i] << " ";
    }
    // cout << endl;
    for (int i = 1; i < n - 1; i++)
    {
        sol += min(left_max[i], right_max[i]) - height[i];
        // cout << sol << " ";
    }
    return sol;
}

int main()
{
    int n;
    cin>>n;
    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];
    }

    cout << trap(height);

    return 0;
}