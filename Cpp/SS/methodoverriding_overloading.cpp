#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void fun(){

    }
    void fun2(){

    }
};

class B{
    public:
    void fun(){

    }//this is called method overriding means same name and same arguments but in different class

    void fun2(int a){

    }//this is called method hiding means hiding a functionality or func. of parent class.
    //the compiler only call the fun2(int ) of class B when obj of B is used if it is not found in B then it goes to parent class A
};
int main(){
    B obj;
    obj.fun();
    //obj.fun2();  // this will give error because it can't found the fun(without args) in class B
    obj.fun2(23);
    return 0;
}