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
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice)
{
    //Scores 100, 100, 50, 40, 40, 20, 10
    //alice 50, 65, 77, 90, 102

    int h_rank = 1;
    for (int i = scores.size() - 1; i > 0; i--)
    {
        if (scores[i] < scores[i - 1])
        {
            h_rank++;
        }
    }
    h_rank++;
    vector<int> ranks(alice.size());
    int j = scores.size() - 1;
    for (int i = 0; i < alice.size(); i++)
    {
        while (alice[i] >= scores[j])
        {
            if (h_rank == 1)
            {
                break;
            }
            if (scores[j] == scores[j - 1])
            {
                j--;
            }
            else
            {
                j--;
                h_rank--;
            }
        }
        ranks[i] = h_rank;
    }
    return ranks;
}

int main(int argc, char const *argv[])
{
    vi board{100, 100, 50, 40, 40, 20, 10};
    vi score{50, 65, 77, 90, 102};
    vi result = climbingLeaderboard(board, score);
    for (int i : result)
    {
        cout << i << " " << endl;
    }

    return 0;
}
