#include <bits/stdc++.h>
using namespace std;
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    vector<int> ret;
    int n = a.size();
    if (k > n)
    {
        k %= n;
    }
    vector<int> result(a.begin()+n-k, a.end());
    result.insert(result.end(), a.begin(), a.begin() + n-k);
    
    for(auto i:queries){
        ret.push_back(result[i]);
    }
    return ret;
}
int main()
{
    vector<int> a = {1,2,3};
    int k = 5;
    vector<int> queries = {0,1,2};
    a = circularArrayRotation(a, k, queries);
    for (int i : a)
    {
        cout << i << endl;
    }
    return 0;
}