#include <bits/stdc++.h>
using namespace std;

int findDigits(int n)
{
    string a = to_string(n);
    vector<int> result;
    for (int i = 0; i < a.size(); i++)
    {
        int tmp = (int)a[i] - 48;
        if(tmp==0){
            continue;
        }
        if (n % tmp == 0)
        {
            result.push_back(tmp);
        }
    }
    return result.size();
}
int main()
{
    cout << findDigits(120);
    return 0;
}
