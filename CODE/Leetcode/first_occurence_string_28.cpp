#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    int n = haystack.size();
    int m = needle.size();

    if (n < m)
    {
        return -1;
    }

    for (int i = 0; i < n - m + 1; i++)
    {
        if (needle == haystack.substr(i, m))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string haystack, needle;
    cin>>haystack>>needle;

    cout << strStr(haystack, needle);

    return 0;
}