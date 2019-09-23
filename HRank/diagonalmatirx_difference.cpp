#include <bits/stdc++.h>
using namespace std;

void fun(int arr[3][3])
{
    int ld = 0, rd = 0;
    for (int i= 0; i < 3; i++)
    {
        ld += arr[i][i];
        rd += arr[i][3 - i - 1];
    }
    cout << abs(ld - rd);
}
int main()
{
    int arr[3][3] = {{2, 3, 4}, {5, 6, 7}, {8, 9, 0}};
    fun(arr);
   return 0;
}
