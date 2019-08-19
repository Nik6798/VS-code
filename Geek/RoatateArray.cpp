#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    
    int t,k ;
    while(t--){
        cin>>n>>k ;
        int arr[2*n]; int i=0;
        for(i=0;i<2*n;i++){
            cin>>arr[i] ;
            if(i==n-1){
                break ;
            }
        }
        for(int j=i+1;j<n*2;j++){
            arr[j] = arr[j%n];
        }
        
    }
    
}