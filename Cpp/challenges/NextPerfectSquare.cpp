#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll, ll> stroage;
void precalfun(ll upto)
{
    for (int i = 1; i < upto; i++)
    {
        stroage[i * i] = i;
    }
}
ll findingNextSquareroot(ll va)
{
    ll find=0;
    try
    {
        find = stroage.at(va);
    }
    catch(const exception& e)
    {
        return -1;
    }
    find++;
    return find*find;
}
int main()
{
    //enter the highest end val for finding perfect square
    //for example up to 100 square
    ll val;
    cout << "Enter the limit :";
    cin >> val; //100
    precalfun(val);
    ll findnextsquare;
    cout << "Enter the Perfect Square :" << endl;
    cin >> findnextsquare;
    cout << findingNextSquareroot(findnextsquare);

    return 0;
}