#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[]={1,0,2,3,0,0,0,4,5},n=sizeof(arr)/4;
    
    for(int i = 0; i < n; i++){
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
    for (int i = 0; i < n; i++){
        cout<<arr[i];
    }
    
    return 0;
}

