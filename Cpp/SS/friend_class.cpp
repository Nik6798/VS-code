#include<iostream>
using namespace std;
class A{
    void fun(){
        //....
    }
};
class B{
    friend A;
    //or 
    //friend void A::fun();
};