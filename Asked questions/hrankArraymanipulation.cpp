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
//main logic
long arrayManipulation(int n, vector<vector<int>> queries)
{
    int arr[n] = {0};
    int start = 0, endarr = 0, value = 0;
    ll max = LONG_MIN;
    for (int i = 0; i < queries.size(); i++)
    {
        start = queries[i][0];
        endarr = queries[i][1];
        value = queries[i][2];
        for (int j = start - 1; j <= endarr - 1; j++)
        {
            arr[j] = arr[j] + value;
        }
    }
    for (int i : arr)
    {
        if (i > max)
        {
            max = i;
        }
    }

    return max;
}

int main(int argc, char const *argv[])
{
    vector<vector<int>> queries{{1, 2, 100}, {2, 5, 100}, {3, 4, 100}};
    long a = arrayManipulation(5, queries);
    cout << a;
    return 0;
}
