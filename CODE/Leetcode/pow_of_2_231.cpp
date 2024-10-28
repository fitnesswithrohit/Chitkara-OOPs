#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 1)
    {
        return true;
    }
    if (n % 2 != 0)
    {
        return false;
    }
    return isPowerOfTwo(n / 2);
}
int main()
{
    double n;
    cin >> n;

    cout << fixed << setprecision(5) << isPowerOfTwo(n);

    return 0;
}