#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i <= (b); ++i)
#define FORD(i, a, b) for (int i = (a); i >= (b); --i)
#define RI(i, n) FOR(i, 1, (n))
#define REP(i, n) FOR(i, 0, (n)-1)
#define mini(a, b) a = min(a, b)
#define maxi(a, b) a = max(a, b)
#define mp make_pair
#define pb push_back
#define st first
#define nd second
#define sz(w) (int)w.size()
typedef vector<int> vi;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
const int inf = 1e9 + 5;
const int nax = 1e6 + 5;

vi birthday(vi a, int day, int month)
{
    vi result;
    int count = 0;
    int sum;
    for (int i = 0; i <= a.size() - month; i++)
    {
        sum = 0;
        for (int j = i; j < i + month; j++)
        {
            sum += a[j];
        }
        if (sum == day)
        {
            count++;
        }
    }

    result.pb(count);
    return result;
}
int main(int argc, char const *argv[])
{
    vi a{2, 2, 1, 3, 2};
    vi print = birthday(a, 4, 2);
    for (int i : print)
    {
        cout << i;
    }

    return 0;
}
