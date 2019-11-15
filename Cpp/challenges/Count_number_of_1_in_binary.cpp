#include <bits/stdc++.h>
using namespace std;

//main logic
int Countfun(int num)
{
    int count = 0;
    while (num != 0)
    {
        int temp = num % 2;
        num /= 2;
        if (temp == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    cout << Countfun(856);
    return 0;
}