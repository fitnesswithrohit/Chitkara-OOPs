#include <bits/stdc++.h>
using namespace std;

void dis(int cls, int mes)
{
    if (cls == mes)
    {
        cout << "Pohoch gaya";
        return;
    }

    // cls ++;
    dis(++cls, mes);
}

int main()
{
    int cls, mes;
    cin >> cls >> mes;

    dis(cls, mes);
    return 0;
}

