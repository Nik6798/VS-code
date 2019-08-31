#include<bits/stdc++.h>
using namespace std;
int bubbleComp,QuickComp,Selection_sortComp,InsertionComp,MergeComp,RecursiveBubbleComp;
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
                RecursiveBubbleComp++;
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
//merge function
void merge(int arr[],int s,int mid,int e){
    int n1,n2,i,j,k;
    n1=mid+1-s;
    n2=e-mid;
    int lef[n1],rig[n2];

    //copy data in temporary array
    for (int i = 0; i < n1; i++)
    {
        lef[i]=arr[s+i];
    }
    for (int j = 0; j < n2; j++)
    {
        rig[j]=arr[mid+1+j];
    }
    
    i=0,j=0,k=s;
   while (i<n1&&j<n2)
   {
       if (lef[i]<=rig[j])
       {
           arr[k]=lef[i];
           i++;
           MergeComp++;
       }
       else
       {
           arr[k]=rig[j];
           j++;
           MergeComp++;
       }
       k++;
   }

   while (i<n1)
   {
        arr[k++]=lef[i++];
   }
   
   while (j<n2)
   {
       arr[k++]=rig[j++];
   }
   
   
    
}
//merge sort main logic
void merge_sort(int arr[],int s,int e){
   if (s<e)
   {
        int mid=(s+e)/2;

        //divding array into two
        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);

        //merging
        merge(arr,s,mid,e);
   }
   
}
//main function
int main(){
    int arr1[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n1=sizeof(arr1)/4;
   //printing the unsorted array
   cout<<"Printing the unsorted array :";
   Print(arr1,n1);
   //Simple Bubble sort
   Bubblesort(arr1,n1);
   //printing the sorted array
   Print(arr1,n1);
   cout<<"Number of comparision in Bubble sort :"<<bubbleComp<<endl<<endl;

   //recursive bubble sort logic
   int arr2[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n2=sizeof(arr2)/4;
   RecursiveBubble(arr2,n2);
   Print(arr2,n2);
   cout<<"Number of comparision in Recursive Bubble sort :"<<RecursiveBubbleComp<<endl<<endl;

    //Quicksort
   int arr3[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n3=sizeof(arr3)/4;
    Quicksort(arr3,0,n3-1);
    Print(arr3,n3);
    cout<<"Number of comparision in Quicksort :"<<QuickComp<<endl<<endl;

    //Selection sort
    int arr4[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n4=sizeof(arr4)/4;
    Selection_sort(arr4,n4);
    Print(arr4,n4);
    cout<<"Number of comparision in Selection sort :"<<Selection_sortComp<<endl<<endl;

    //Insertion sort
    int arr5[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n5=sizeof(arr5)/4;
    Insertion_sort(arr5,n5);
    Print(arr5,n5);
    cout<<"Number of comparision in Insertion sort :"<<InsertionComp<<endl<<endl;
    
    //merge sort 
    int arr6[]={9,565,3,2,6,76,98,23,1,67,453,234,455,34},n6=sizeof(arr6)/4;
    merge_sort(arr6,0,n6-1);
    Print(arr6,n6);
    cout<<"Number of comparision in Merge sort :"<<MergeComp<<endl<<endl;
}
