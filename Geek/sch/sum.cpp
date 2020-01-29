#include<iostream>
using namespace std;
int sum(int a,int b,int c){
    return a+b+c;
}
int main(){
    int a,b,c;
    cout<<"enter numbers :";
    cin>>a>>b>>c;
    cout<<sum(a,b,c);
}

