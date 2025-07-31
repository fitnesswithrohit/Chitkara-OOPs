#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long sol = 0;
    while (x != 0)
    {
        int d = x % 10;
        if (sol > INT_MAX / 10 || sol < INT_MIN / 10)
            return 0;

        sol = sol * 10 + d;
        x /= 10;
    }
    return sol;
}


int main(){
    int n;
    cin>>n;
    cout<<reverse(n);
    
    return 0;
}