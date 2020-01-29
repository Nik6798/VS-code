#include <bits/stdc++.h>
using namespace std;
int pickingNumbers(vector<int> a)
{
    int z = 0;
    int freq[100] = {0};
    for (int i = 0; i < a.size(); i++)
        freq[a[i]]++;

    for (int i = 1; i < 100; i++)
        z = max(z, freq[i] + freq[i - 1]);
    return z;
}
int main()
{
    vector<int> a = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 3, 3, 4, 5, 6};
    int x = pickingNumbers(a);
    cout << x;
    return 0;
}