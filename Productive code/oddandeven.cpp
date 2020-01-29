#include<bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cin >> num; //odd num will left most digit(LSB) always start with 1 and for even it is 0
    cout<<endl;
    cout << (num&1);// for ex- 4 in binary is "100" and 3 in binary is "011" so by taking "&" with 1 it will give 
                    //0 for even and 1 for odd
}