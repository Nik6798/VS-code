#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    A(int x){
        cout<<"const A";
    }
};
class B:public A
{
private:
    int b;
public:
    B():A(34) {
        cout<<"\nconst b";
    }
    ~B() {}
};
int main(){
    B con;

return 0;
}