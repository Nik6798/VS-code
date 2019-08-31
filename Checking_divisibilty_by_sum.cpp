#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,sum=0,ref;
    cout<<"Enter the number :";
    cin>>x;
    ref=x;
    cout<<"\nEnter the number which you want to find if it is divisible by the number you enter before or not :";
    cin>>y;
    while (x>1)
    {
        int temp=x%10;
        x/=10;
        sum+=temp;
    }
    if (sum%y==0)
    {
        cout<<endl<<ref<<" is divisible by "<<y;
    }
    else
    {
        cout<<endl<<ref<<" is not divisible by "<<y;
    }
    
    
    
}