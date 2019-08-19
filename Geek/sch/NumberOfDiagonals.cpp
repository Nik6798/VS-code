#include<iostream>
using namespace std;

int main(){
    cout<<"Enter the number :";
    int T,N;
    cin>>T;
    while (T)
    {
        cout<<"\nEnter the number of diagonals :";
        cin>>N;
        cout<<N*(N-3)/2;
                T--;
    }
    
}