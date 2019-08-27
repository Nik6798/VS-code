#include<bits/stdc++.h>
using namespace std;
int bubbleComp,QuickComp,Selection_sortComp,InsertionComp;
//swapping 
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

//printing array
void Print(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//bubble sort main logic
void Bubblesort(int arr[],int n){
    bool swapped=false;
    for (int j = 0; j < n-1; j++)
   {
       
        for (int i = 0; i < n-1-j; i++)
        {
            bubbleComp++;
            swapped=false;
            if (arr[i]>arr[i+1])
            {
                swap(&arr[i],&arr[i+1]);
                swapped=true;
            }  
        }
        if(swapped==false){
            break;
        }
    }
}

//bubble sort recursive logic
void RecursiveBubble(int arr[],int n){
        //base case
        if (n==1)
        {
            return;
        }

        for (int i = 0; i < n-1; i++)
        {
            if (arr[i]>arr[i+1])
            {
               swap(&arr[i],&arr[i+1]); 
            }
        }

        RecursiveBubble(arr,n-1);
                
}

//Quicksort logic
int QuickPartition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j = low; j <high; j++)
    {   
        QuickComp++;
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1); 
    
}
//Quicksort function
void Quicksort(int arr[],int low,int high){
    if(low<high){
        int pi=QuickPartition(arr,low,high);
        Quicksort(arr,low,pi-1);
        Quicksort(arr,pi+1,high);
    }
}

//Selection sort main logic
void Selection_sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int minPos=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minPos]>arr[j])
            {
                minPos=j;
               
            }
             Selection_sortComp++;
            
        }
        swap(arr[minPos],arr[i]);
    }
    
}

//Insertion Sort main logic
void Insertion_sort(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        int key=arr[i];
        int j=i-1;

             while(j>=0&&arr[j]>key)
            {
                arr[j+1]=arr[j];
                j--;
                InsertionComp++;
            }    
            arr[j+1]=key;    
    }
    
}
//main function
int main(){
    int arr1[]={9,9,3,2,6,76,34,23,12,34,453,234,455,34},n1=sizeof(arr1)/4;
   //printing the unsorted array
   Print(arr1,n1);
   Bubblesort(arr1,n1);
   //printing the sorted array
   Print(arr1,n1);
   cout<<"Number of comparision in Bubble sort :"<<bubbleComp<<endl;

   //recursive bubble sort logic
   int arr2[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n2=sizeof(arr2)/4;
   RecursiveBubble(arr2,n2);
   Print(arr2,n2);

    //Quicksort
   int arr3[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n3=sizeof(arr3)/4;
    Quicksort(arr3,0,n3-1);
    Print(arr3,n3);
    cout<<"Number of comparision in Quicksort :"<<QuickComp<<endl;

    //Selection sort
    int arr4[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n4=sizeof(arr4)/4;
    Selection_sort(arr4,n4);
    Print(arr4,n4);
    cout<<"Number of comparision in Selection sort :"<<Selection_sortComp<<endl;

    //Insertion sort
    int arr5[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n5=sizeof(arr5)/4;
    Insertion_sort(arr5,n5);
    Print(arr5,n5);
    cout<<"Number of comparision in Insertion sort :"<<InsertionComp<<endl;

}
