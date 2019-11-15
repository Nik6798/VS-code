#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 200;
    int reversedNumber = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    cout << reversedNumber;
    return 0;
}