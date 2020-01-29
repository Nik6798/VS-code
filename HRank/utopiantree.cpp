#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;
typedef long long ll;

//main logic
int utopianTree(int n)
{
    int size = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            size *= 2;
        }
        else
        {
            size += 1;
        }
    }
    return size;
}

int main(int argc, char const *argv[])
{
    cout << utopianTree(4);
    return 0;
}
