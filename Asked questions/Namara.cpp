#include <iostream>
#define ll long long
using namespace std;

//finbonacci main logic
void fibonacci(int x){
    int val1=0,val2=1;
    int fibo;
    for (int i = 0; i < 100000; i++)
    {
        fibo=val1+val2;
        val1=val2;
        val2=fibo;
        if (fibo==x)
        {
            cout<<"the fibonacci number is on : "<<i<<" place";
            break;
        }
        if (i=100000)
        {
            cout<<"100000 has reached";
        }
        
    }
    
 }
int main(){
    ll input;
    cout<<"Enter the fibonacci number :";
    cin>>input;
    fibonacci(input);

    
    
}