#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(12);
    iota(l.begin(), l.end(), 5);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> k(12);
    iota(k.begin(), k.end(), 23);
    for (int i : k)
    {
        cout << i << " ";
    }

    shuffle(k.begin(), k.end(), mt19937{random_device{}()});
    cout << endl;
    for (int i : k)
    {
        cout << i << " ";
    }
    return 0;
}