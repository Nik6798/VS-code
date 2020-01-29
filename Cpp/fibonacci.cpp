#include<iostream>
using namespace std;
int fun(int num1)
    {
        if(num1<=1)
            return num1;

        return fun(num1-1)+fun(num1-2);
    }
int dyna(int num)
{
    int arr[num+2];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=num;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }

    return arr[num];
}
int main()
{
    cout<<fun(10)<<dyna(10);
    return 0;
} // namespace std
