#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "12:13:32AM";
    int a = stoi(s);
    if (s.find('P') != -1)
    {
        s = s.substr(0, 8);
        if (a == 12)
        {
            cout << s;
            return 0;
        }
        a += 12;
        string s2 = to_string(a);
        cout << s.replace(0, 2, s2);
    }
    else
    {
        if (a==12)
        {
            s.replace(0, 2, "00");
        }
        cout <<s.substr(0, 8);
    }

    return 0;
}