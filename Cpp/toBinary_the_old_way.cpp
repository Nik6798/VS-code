#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,ar[32];
    cout<<"Enter the number :";
    cin>>a;
    cout<<endl;
    for ( i = 0; a > 0; i++)
    {
        ar[i]=a%2;
        a=a/2;
    }
    for (  i=i-1;i>=0 ; i--)
    {
        cout<<ar[i];
    }
    
    
return 0;
}