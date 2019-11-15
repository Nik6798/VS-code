#include <bits/stdc++.h>
using namespace std;

int saveThePrisoner(int n, int m, int s)
{
    int a = s + m - 1;
    if (a % n == 0)
    {
        return n;
    }
    return a % n;
}

int main()
{
    cout << saveThePrisoner(3, 3, 1) << endl;
    return 0;
}