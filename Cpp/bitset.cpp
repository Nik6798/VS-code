#include<bits/stdc++.h>
// #include<bitset>
using namespace std;

//Another way of doing it 
int main(){
    int a=6553;
    std::bitset<33>x(a);
    a=~a;
    bitset<33>y(a);
    cout<<x<<endl<<y;
    cout<<sizeof(int);
}