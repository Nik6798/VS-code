#include <bits/stdc++.h>
using namespace std;
vector<int> permutationEquation(vector<int> p)
{
    map<int, int> result;
    vector<int> ret;
    for (int i = 0; i < p.size(); i++)
    {
        result[p[i]] = i + 1; 
    }
    for (int j = 0; j < p.size(); j++)
    {
        int ind1 = result[p[j]]; 
        int ind2 = result[ind1];
        int ind3 = result[ind2];
        ret.push_back(ind3);
    }
    return ret;
}
int main()
{
    vector<int> a = {4,3,5,1,2};
    permutationEquation(a);
    return 0;
}