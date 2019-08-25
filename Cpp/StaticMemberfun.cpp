#include<iostream>
using namespace std;

class Sta{
    public :
    int static x; // and can't initialize it here
    // int Sta::x=0; can't use this decleration here
    int b=0;

    static void fun(){
        x=34;
        cout<<x;
    }
};
int Sta::x=333;

int main(){
Sta a={23};
cout<<a.b<<" "<<Sta::x;
Sta::fun();
}



