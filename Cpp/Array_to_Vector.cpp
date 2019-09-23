#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1, 2, 4, 6, 6};
    //copying a data of array into a vector or simply converting it
    vector<int> vec(arr,arr+5);
     for (int i = 0; i < 5; i++)
    {
        cout << vec[i]<<" ";
    }
    return 0;
}