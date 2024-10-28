#include <bits/stdc++.h>
using namespace std;

inline int find(int a, int b)
{
    return a - b;
}

int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int number;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        number = find(arr[mid], mid + 1);
        // number = arr[mid] - mid-1;

        if (number >= k)
            e = mid - 1;
        else
        {
            s = mid + 1;
        }
    }

    if (e == -1)
        return k;

    return arr[e] + k - find(arr[e], e + 1);
    // return arr[e] + k-(arr[e] - e-1);
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << findKthPositive(arr,k);

    return 0;
}