#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "DDUUUUDD";
    int Position = 0;
    int valley = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        s[i] == 'U' ? Position++ : Position--;
        if (Position < 0 && s[i + 1] == 'U' && 0 == Position + 1)
        {
            valley++;
        }
    }
    cout << valley;
    return 0;
}