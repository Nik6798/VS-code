#include<bits/stdc++.h>
#include<bitset>
using namespace std;
template<typename T>

// TODO the toBinaryString is incomplete 
string toBinaryString(const T& t){
        string s="";
        int n=sizeof(T)*8;
        return
}

int main(){
    int a=6553;
    a=~a;
    cout<<endl<<a;
    int c=344;
    cout<<toBinaryString(c);    
return 0;
}

//Another way of doing it 

    // int main(){
    //     int a=6553;
    // std::bitset<33>x(a);
    // a=~a;
    // bitset<33>y(a);
    // cout<<x<<endl<<y;
    // cout<<sizeof(int);
    // }