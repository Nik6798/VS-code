#include<iostream>
using namespace std;
int main(){
    int a=34,b=98;
    cout<<"a :"<<a<<" b :"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a :"<<a<<" b :"<<b<<endl;
}