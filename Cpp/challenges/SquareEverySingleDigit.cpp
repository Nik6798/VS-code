#include <bits/stdc++.h>
using namespace std;

long long SquareDigit(long long a)
{
    string s = "";
    string val = to_string(a);
    for (auto a : val)
    {
        int temp = a - 48;
        s = s + to_string(temp * temp);
    }
    // return atoll(s.c_str());
    return stoll(s);
}
int main()
{
    cout << SquareDigit(33443);
    return 0;
}