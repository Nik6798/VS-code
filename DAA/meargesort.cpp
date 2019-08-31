#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int s, int e){
    int i,j,k,mid;
    mid=((s+e)/2);
    i=s;
    j=mid+1;
    k=s;
    int temp[100];
    while (i<=mid && j<=e)
    {
        if (arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
     while (j<=e)
    {
        temp[k++]=arr[j++];
    }

    for (int i = 0; i <=e; i++)
    {
        arr[i]=temp[i];
    }
}
void merge_sort(int arr[],int s,int e){
    if (s>=e)
    {
        return ;
    }
    else
    {
        int mid=((s+e)/2);  //3
        merge_sort(arr,s,mid);  //0 , 1
        merge_sort(arr,mid+1,e);

        merge(arr,s,e);
    }
    
    
}
int main(int argc, char const *argv[])
{   
    int n;
    cout<<"Enter the size of array :";
    cin>>n;    
    int arr[n];
    cout<<"\nEnter the element in array :";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    merge_sort(arr,0,n-1);

for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
