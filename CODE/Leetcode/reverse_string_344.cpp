#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<char>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    reverseString(s);

    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    
    return 0;
}