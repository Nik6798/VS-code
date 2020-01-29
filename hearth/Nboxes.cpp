#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fact(ll M)
{
    if (M==1)
    {
        return 1;
    }
    M= M* fact(M-1);
    return M%(1000000000+7);
}
int main()
{
    ll N, M;
    cin >> N >> M;
    cout << fact(M);
    return 0;
}