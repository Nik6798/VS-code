#include <bits/stdc++.h>
using namespace std;
int main()
{
    int block_count = 0, block = 0, n;
    cout << "Enter the size of array :";

    //taking size of array
    cin >> n;
    int ar[n];
    cout << endl
         << "Enter " << n << " elements in array : ";

    //taking elements in array
    for (int i = 0; i < n; i++)
    {
        while (cin >> ar[i])
        {

            if (ar[i] == 0 || ar[i] == 1)
            {
                break;
            }
            cout << endl
                 << "Wrong Input :";
        }
    }

    //printing array
    for (int i = 0; i < n; i++)
    {
        cout << ar[i];
    }

    //logic for counting the blocks of 1's
    for (int i = 0; i < n - 1; i++)
    {

        if (ar[i] == 1)
        {
            block++;
        }
        else
        {
            block = 0;
        }

        if (block > 1 && block < 3)
        {
            block_count++;
        }
    }

    //printing the number of blocks
    cout << endl
         << block_count;
}