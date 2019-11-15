#include<bits/stdc++.h>
using namespace std;

int Check5(long long a){
    string check = to_string(a);
    for(auto c:check){
        if(c=='5'){
            cout << "True";
            return 0;
        }
    }
    cout << "False";
    return 0;
}
int main(){
    long long a;
    cin >> a;
    Check5(a);
    return 0;
}