#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (!isalpha(s[i]) && !isdigit(s[i]))
            i++;
        else if (!isalpha(s[j]) && !isdigit(s[j]))
            j--;
        else if (tolower(s[i]) != tolower(s[j]))
            return false;
        else
            i++, j--;
    }

    return true;
}

int main(){
    string s;
    getline(cin,s);

    cout<<isPalindrome(s);
    return 0;
}