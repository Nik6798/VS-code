#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 23;
    signed int b = -34;
    a = ~a;
    b = ~b;
    cout << a << " " << b;
    cout << endl
         << a - b;
    return 0;
}
