#include<iostream>
using namespace std;
main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the numbers in array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        
        
        if (arr[i]!=0&&arr[i+1]!=0)
        {   
            arr[i]*=2;
            arr[i+1]=0;
        }
        
    }
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    cout<<"\nprinting sol :";
    for (int i = 0; i < n; i++){
        if (arr[i]==0)
        {
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0)
                {
                    arr[i]=arr[j];
                    arr[j]=0;
                    break;
                }
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }

    
}