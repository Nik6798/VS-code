#include <bits/stdc++.h>
using namespace std;
int jumpingOnClouds(vector<int> c, int k)
{
    int energy = 100;
    int i = 0;
    while (true)
    {
        if (c[i] == 1)
        {
            energy = energy - 3;
        }
        else
        {
            energy--;
        }
        i = (i + k) % c.size();
        if (i == 0)
        {
            break;
        }
    }
    return energy;
}
int main()
{
    vector<int> c = {0, 0, 1, 0, 0, 1, 1, 0};
    cout << "Ans :" << jumpingOnClouds(c, 2);
    return 0;
}