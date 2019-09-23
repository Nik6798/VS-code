#include <bits/stdc++.h>
using namespace std;

string dayOfProgrammer(int year)
{
    if(year==1918)return "26.09."+to_string(year);
    
    else if (1700 <= year && year <1918)
    {
       return year % 4==0 ? ("12.09." + to_string(year)) : ("13.09." + to_string(year));
    }

    else
    {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            return "12.09." + to_string(year);
        else
            return "13.09." + to_string(year);
    }
}
int main()
{
    int year;
    cin >> year;
    string s = dayOfProgrammer(year);
    cout << s;
    return 0;
}
