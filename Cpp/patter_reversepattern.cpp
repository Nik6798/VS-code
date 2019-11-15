#include <iostream>
using namespace std;
int main()
{
    int row = 1, i, j, max_row, num;
    cout << "number of maximum rows :";
    cin >> max_row;
    num = max_row;
    // cout<<i+" "; worng
    for (i = 1; i <= row; i++)
    {
        cout << i << " ";
        if (i == row)
        {
            for (j = 1; j <= max_row; j++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= max_row; j++)
            {
                cout << j << " ";
            }
            cout << endl;
            i = 0;
            row++;
            max_row--;
        }

        if (row > num)
        {
            break;
        }
    }
}