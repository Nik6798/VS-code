// #include<bits/stdc++.h> 
// using namespace std;

// int digitsum(int num){
//     int sum=0;
//     while (num>0||sum>9)
//     {   
//         if(num==0){
//             num=sum;
//             sum=0;
//         }
//          sum+=num%10;
//          num/=10;
//     }
//     return sum;
// }
// int main(){
//     int num;
//     cout<<"Enter the number :";
//     cin>>num;
//     cout<<digitsum(num);
// }
#include<bits/stdc++.h>  
using namespace std; 
  
int digSum(int n) 
{ 
    if (n == 0)  
       return 0; 
    return (n % 9 == 0) ? 9 : (n % 9); 
} 
  
int main() 
{ 
    int n = 12345; 
    cout<<digSum(n); 
    return 0; 
} 