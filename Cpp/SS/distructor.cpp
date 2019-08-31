#include<iostream>
using namespace std;

class A{
    public :
    int a,b;
    A(){}
    ~A(){
        cout<<"Destructor is running ";
    }
    void fun(){
        cout<<a<<" "<<b;
    }
}a;

int main(int argc, char const *argv[])
{
    a.a=34;
    a.b=45;

    a.fun();
    return 0;
}
