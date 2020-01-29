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
int hurdleRace(int k, vi height)
{
    auto a = max_element(height.begin(), height.end());
    return *a - k < 0 ? 0 : *a - k;
}

int main(int argc, char const *argv[])
{
    vi height = {1, 6, 3, 5, 2};
    int a = 4;
    cout << hurdleRace(a, height);
    return 0;
}
