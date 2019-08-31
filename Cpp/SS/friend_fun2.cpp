#include<iostream>
using namespace std;
class B;
class A
{
private:
    int a;
public:
    A(int x);
    ~A();
    friend void fun(A,B);
};

A::A(int x)
{
    a=x;
}

A::~A()
{
    cout<<endl<<"destructor A ";
}

class B
{
private:
    int a;
public:
    B(int x);
    
    ~B(){
        cout<<endl<<"Destructor B ";
    }
    friend void fun(A,B);
};

B::B(int x)
{
    a=x;
}

void fun(A o,B p){
    cout<<o.a<<" "<<p.a;
}

int main(){
    A obA(34);
    B obB(45);
    fun(obA,obB);
}