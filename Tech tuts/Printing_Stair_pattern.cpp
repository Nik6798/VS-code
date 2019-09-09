#include<bits/stdc++.h>
using namespace std;

//FIXME note completed and worng
void PrintPattern(int val){
    int col = 0, row = 0;
    int col_boundary = val - 1;
    char move = 'r';
    int matrix[val][val];
    int num = 1;
    for (int i = 1; i < val*val+1; i++)
    {
        matrix[row][col] = num;
        switch (move)
        {
        case 'r':
            col += 1;
            break;
        case 'l':
            col -= 1;
        }

        if (move=='r'&&col==6 || move=='l'&&col==1)
        {
            num++;
             row += 1;
            switch (move)
            {
            case 'r':
                move = 'l';
                break;
            case 'l':
                move = 'r';
                break;
            }
        }
        
    }

    for (int i = 0; i < val; i++)
    {
        for (int j = 0; j < val; j++)
        {
            int n = matrix[i][j];
            n < 10 ? cout << n << "  " : cout << n << " ";
        }
        cout << endl;
    }
    
    
}
int main(){
    int val;
    cin >> val;
    PrintPattern(val);
    return 0;
}