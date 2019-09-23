#include <bits/stdc++.h>
using namespace std;
//TODO  Think
string kangaroo(int x1, int v1, int x2, int v2)
{
    if (v2 > v1 && x2 > x1 || v1 == v2 && x2 > x1)
    {
        return "NO";
    }

    int mod = (x1 - x2) % (v2 - v1);
    if (mod == 0)
    {
        return "YES";
    }
    return "NO";
}
int main()
{
    string s = kangaroo(2, 1, 1, 2);
    cout << s;
    return 0;
}