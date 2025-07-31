#include <bits/stdc++.h>
using namespace std;

// Iterative approach
int factorial(int n)
{
    int sol = 1;
    for (int i = 2; i <= n; i++)
        sol *= i;
    return sol;
}

//Recursive approach
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    cin>>n;
    cout << factorial(n) << endl;

    cout << fact(n) << endl;
    return 0;
}
