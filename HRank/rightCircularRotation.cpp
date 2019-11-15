#include <bits/stdc++.h>
using namespace std;
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    int n = a.size();
    for (int i = 0; i < 2; i++)
    {
        a.insert(a.end(),a.begin(),a.end());
    }
    for(int i:a){
        cout << i<< endl;
    }
    vector<int> result(a[k],n);
    return result;
}
int main()
{
    vector<int> a = {3, 4, 5};
    int k = 2;
    vector<int> queries = {1, 2};
    a = circularArrayRotation(a, k, queries);
    // for (int i : a)
    // {
    //     cout << i << endl;
    // }
    return 0;
}