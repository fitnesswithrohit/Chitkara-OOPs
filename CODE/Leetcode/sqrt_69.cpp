#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    if (x == 1)
        return 1;
    long s = 1, e = x / 2;
    while (s <= e)
    {
        long mid = s + (e - s) / 2;
        if (mid * mid == x)
            return mid;

        if (mid * mid < x)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return e;
}

int main()
{
    int n;
    cin >> n;
    cout << sqrt(n);
    return 0;
}