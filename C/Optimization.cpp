#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define rr return 0
#define bloop(i,a,n) for(int i=a;i<=n;i++)
#define maxe(a) *max_element(a.begin(),a.end())
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr) ;cout.tie(nullptr)
#define ll long long int 
#define ull unsigned long long int
using namespace std;
template<typename T>
void _read(T &x){
    bool neg = false;
    register int c;
    x=0;
    c=getchar();
    if(c=='-'){
        neg=true;
        c=getchar();
    }
    for(;c>47&&c<58;c=getchar()){
        x = (x<<1) + (x<<3) + c - 48;  // x<<1  x*2^1 = 2x + 8x ;4 ; 45
        //x = 10*x + c- 48
    }
    if(neg){
        x*=-1;
    }
}
int main(){
    fast;
        int n;
        _read(n);
        cout<<n*2 ;
    
}