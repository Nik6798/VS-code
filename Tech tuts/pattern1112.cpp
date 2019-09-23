#include <bits/stdc++.h>
using namespace std;

void printfun(int n)
{
    int var = 0;
    for (int i = 0; i < n; i++)
    {
        var++;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {

                cout << var;
                if (j == n - 1)
                {
                    cout << ++var;
                }
            }
            else
            {
                if (j == 0)
                {
                    cout << var;
                    var--;
                    continue;
                }
                cout << var;
                if (j == n - 1)
                {
                    cout << var;
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