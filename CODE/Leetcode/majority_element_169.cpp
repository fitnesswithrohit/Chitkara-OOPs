#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &arr)
{
    // Moores Voting Algorithm
    int count = 0;
    int element;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else if (element == arr[i])
            count++;
        else
        {
            count--;
        }
    }

    return element;
}

// You can solve this using map also (for hint check majority_element_II_229 in this question list)

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << majorityElement(nums);

    return 0;
}