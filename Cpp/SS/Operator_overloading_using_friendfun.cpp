#include<iostream>
using namespace std;
class Dost
{
private:
    int a,b;
public:
    Dost(int ,int);
    ~Dost();
    friend Dost operator+(Dost,Dost);
    void Printf(){
        cout.operator<<(a)<<" "<<b;
        // in friend function operator<<(cout,a);
    }
};

Dost::Dost(int x ,int y) 
{
    a=x;
    b=y;
}

Dost::~Dost()
{
}

Dost operator+(Dost X,Dost Y){
    Dost temp(0,0);
    temp.a=Y.a+X.a;
    temp.b=Y.b+X.b;
    return temp;
}
int main(int argc, char const *argv[])
{
    Dost A(23,55),B(65,89),X(0,0);
    X=A+B; //operator+(A,B)
    X.Printf();
    return 0;
}
