#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    // return n>0 && 1162261467 % n == 0; // first  method 1 line code
    if (n == 1) // second method
        return 1;
    if (n <= 0)
        return 0;
    if (n % 3 != 0)
        return 0;
    else
    {
        return isPowerOfThree(n / 3);
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<isPowerOfThree(n);
    return 0;
}