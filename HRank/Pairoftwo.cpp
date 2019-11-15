#include <bits/stdc++.h>
using namespace std;
int sockMerchant(int n, vector<int> ar)
{
    int traversed[n] = {0};
    map<int, int> repeated;
    int pair = 0;
    for (int i = 0; i < ar.size(); i++)
    {
        if (traversed[i] == 0)
        {
            int count = 0;
            for (int j = i; j < ar.size(); j++)
            {
                if (ar[i] == ar[j])
                {
                    ++count;
                    traversed[j] = 1;
                }
            }
            repeated[ar[i]] = count;
        }
    }
    for (auto i : repeated)
    {
        pair += ceil(i.second / 2);
    }
    cout << pair;
}
int main(int argc, char const *argv[])
{
    vector<int> ar = {1, 2, 1, 2, 1, 3, 2};
    sockMerchant(9, ar);
    return 0;
}
