#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{

    int sol = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sol = sol ^ nums[i];
    }
    return sol;
}

int main()
{
    int n;
    cin>>n;
    vector<int>sol(n);
    for(int i=0;i<n;i++){
        cin>>sol[i];
    }

    cout<<singleNumber(sol);

    return 0;
}
