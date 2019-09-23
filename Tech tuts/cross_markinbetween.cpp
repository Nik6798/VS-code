#include <bits/stdc++.h>
using namespace std;
void printfun(int n)
{
    int nodd = 1, neven = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 != 0)
            {
                if (j == 0)
                {
                    nodd = neven + i;
                }
                cout << nodd;
                if (j < i - 1)
                {
                    cout << "X";
                }
                nodd++;
            }
            else
            {
                if (j == 0)
                    neven = nodd + i - 1;

                cout << neven--;

                if (j < i - 1)
                {
                    cout << "X";
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "number of rows:";
    cin >> n;
    printfun(n);
    return 0;
}