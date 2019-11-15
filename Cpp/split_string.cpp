#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[] = "10:23:00 PM.this,is,the.time";
    char *ch = strtok(a, ":,.");
    while (ch != NULL)
    {
        cout << ch << " ";
        ch = strtok(NULL, ",:.");
    }
    return 0;
}