#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
string angryProfessor(int k, vector<int> a)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0)
        {
            count++;
        }
    }
    if (k <= count)
    {
        return "NO";
    }
    else
        return "YES";
}
int main()
{
    vi in = {-1, -1, 0, 0, 1, 1};
    cout << angryProfessor(4, in);
    return 0;
}
