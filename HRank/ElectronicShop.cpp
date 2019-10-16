#include <bits/stdc++.h>
using namespace std;
//main logic
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b, int n, int m)
{
    int maxval = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val=keyboards[i] + drives[j];
            if (val >= maxval&&b>=val)
            {
                maxval = val;
            }
        }
    }
    if (maxval == 0)
    {
        return -1;
    }
    else
    {
        return maxval;
    }
}
