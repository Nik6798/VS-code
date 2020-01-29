#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;
typedef long long ll;

//main logic
int viralAdvertising(int n)
{
    int liked = 0, shared = 5,num_liked=0;
    for (int i = 0; i < n; i++)
    {
        liked = shared / 2;
        shared = liked * 3;
        num_liked += liked;
    }

    return num_liked;
}

int main(int argc, char const *argv[])
{
    cout << viralAdvertising(3);
    return 0;
}
