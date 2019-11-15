// #include<iostream>
// using namespace std;
// int main(int argc, const char** argv) {
//     int a,b,big;
//     int gcd=1;
//     cin>>a>>b;
//     if (a==b)
//     {
//         gcd=a;
//         cout<<gcd;
//         return 0;
//     }
    
//     big=a>b?a:b;
    
//     for (int i = 2; i <(big/2)+1; i++)
//     {
//         if (a%i==0&&b%i==0)
//         {
//             gcd=i;
//         }
//     }
//     cout<<gcd;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(int argc, const char** argv) {
    int A,B,T,big;
    cin>>T;
    while(T)
    {int gcd=1;
        cin>>A>>B;
        if (A==B)
        {
            gcd=A;
            cout<<gcd;
            return 0;
        }
    
    big=A>B?A:B;
    
    for (int i = 2; i <(big/2)+1; i++)
    {
        if (A%i==0&&B%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd<<"\n";
        T--;
    }
    return 0;
}