#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;

    for (int i = 0; i < t.size(); i++)
    {
        if (mp[t[i]] > 0)
            mp[t[i]]--;
    }

    for (auto i : mp)
    {
        if (i.second > 0)
            return false;
    }

    return true;
}
int main()
{   
    string s,t;
    cin>>s>>t;

    cout<<isAnagram(s,t);
    return 0;
}