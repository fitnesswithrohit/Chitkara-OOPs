#include <bits/stdc++.h>
using namespace std;

string toGoatLatin(string s)
{
    string sol = "";
    string temp = "";
    int count = 1;
    int i = 0;
    while (i < s.size())
    {
        if (tolower(s[i]) == 'a' || tolower(s[i]) == 'e' || tolower(s[i]) == 'i' || tolower(s[i]) == 'o' || tolower(s[i]) == 'u')
        {
            while (isalpha(s[i]))
            {
                temp += s[i];
                i++;
            }
            temp += "ma";
            int j = 0;
            while (j < count)
            {
                temp += 'a';
                j++;
            }

            sol += temp;
            if (i < s.size())
                sol += ' ';
            temp = "";
            count++;
        }
        else
        {
            char ch = s[i];
            i++;
            while (isalpha(s[i]))
            {
                temp += s[i];
                i++;
            }

            sol += temp;
            sol += ch;
            sol += "ma";

            int j = 0;
            while (j < count)
            {
                sol += 'a';
                j++;
            }

            temp = "";
            count++;
            if (i < s.size())
                sol += ' ';
        }
        i++;
    }
    return sol;
}

int main(){
    string s;
    getline(cin,s);

    cout<<toGoatLatin(s);

    return 0;
}