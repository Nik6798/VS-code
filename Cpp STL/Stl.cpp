#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main(int argc, char const *argv[])
{
    //using vector
    vi a = {13,42,1, 3, 3, 4};
    sort(a.begin(), a.end());
    for(int i:a){
        cout << i << " ";
    }
    bool has = binary_search(a.begin(), a.end(), 43);
    cout << has;
    return 0;
}
