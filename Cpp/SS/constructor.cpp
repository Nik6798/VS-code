#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex(int,int);
    Complex(int);
    ~Complex();
    Complex(){
        a=69;
        b=96;
    }
    void Print();
};

Complex::Complex(int a,int b)
{
   this->b=a;
   this->a=b;
}

Complex::~Complex()
{
}
void Complex::Print(){
    cout<<a<<" "<<b<<endl;
}
Complex::Complex(int x){
    cout<<x<<endl;
}

int main(){
    Complex c1(3,4);
    Complex c2=Complex(3,20),c3=34,c4=2,c5;
    c1.Print();
    c2.Print();
    c3.Print();
    c4.Print();
    
}