#include <bits/stdc++.h>
using namespace std;

void spiral(int size)
{
    //col and row
    int col = 0, row = 0;

    //boundary and sizeleft
    int boundary = size - 1, sizeleft = size - 1;
    //flag
    int flag = 1;

    //matrix
    int matrix[size][size];

    //movement
    char move = 'r';
    for (int i = 1; i < size * size + 1; i++)
    {
        matrix[row][col] = i;
        switch (move)
        {
        case 'r':
            col += 1;
            break;
        case 'd':
            row += 1;
            break;
        case 'l':
            col -= 1;
            break;
        case 'u':
            row -= 1;
            break;
        }

        if (i == boundary)
        {
            boundary += sizeleft;
            if (flag != 2)
            {
                flag = 2;
            }
            else
            {
                flag = 1;
                sizeleft -= 1;
            }

            switch (move)
            {
            case 'r':
                move = 'd';
                break;
            case 'd':
                move = 'l';
                break;
            case 'l':
                move = 'u';
                break;
            case 'u':
                move = 'r';
                break;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int n = matrix[i][j];
            n < 10 ? cout << n << "  " : cout << n << " ";
        }
        cout << endl;
    }
}
int main()
{
    int size;
    cout << "Enter the size :";
    cin >> size;
    cout << endl;
    spiral(size);
    return 0;
}