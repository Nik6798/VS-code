#include <bits/stdc++.h>
using namespace std;
vector<int> precompute(int max, int min, vector<int> a)
{

    vector<int> tmp;
    int check;
    for (int i = max; i <= (min); i = i + max)
    {
        check = 0;
        for (int j = 0; j < a.size(); j++)
        {

            if (i % a[j] == 0)
            {
                check += 1;
            }
        }
        if (check == a.size())
        {
            tmp.push_back(i);
        }
    }
    return tmp;
}

void fun(vector<int> c, vector<int> b)
{

    vector<int> countnum;
    for (int i = 0; i < c.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < b.size(); j++)
        {
            if (b[j] % c[i] == 0)
            {
                count++;
            }
        }
        if (count == b.size())
        {
            countnum.push_back(c[i]);
        }
    }

}

int main()
{
    vector<int> a{2, 6};
    vector<int> b{24,36};
    vector<int> c;
    auto max = max_element(a.begin(), a.end());
    auto min = min_element(b.begin(), b.end());
    c = precompute(*max, *min, a);
    fun(c, b);
    return 0;
}