#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
//TODO incomplete
// public : int gcd(int a, int b){ 
//     if (a == 0) 
//         return b;  
//     return gcd(b % a, a); 
void kangaroo(int x1, int v1, int x2, int v2) {
    int gcd = __gcd(x1 + v1, x2 + v2);
    int lcm=((x1+v1)*(x2+v2))/gcd;
    cout << gcd<<" "<<lcm;
}

int main(){
    kangaroo(0,65,0,16);
    return 0;
}