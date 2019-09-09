#include<iostream>
using namespace std;

class CopyConst
{
public:
    int x;
public:
    CopyConst(){
        x=34;
    }
    
    CopyConst(int x,int y){
        this->x=24564;
    }
    CopyConst(int x);
    CopyConst(CopyConst &a);
    ~CopyConst();
};

CopyConst::CopyConst(int x)
{
    this->x=x;
}
CopyConst::CopyConst(CopyConst &a){
    this->x=a.x;
}
CopyConst::~CopyConst()
{
    cout<<"distructor";
}

int main(int argc, char const *argv[])
{   
    CopyConst a;
    CopyConst b=a;
   static CopyConst c(32,53);
    cout<<a.x<<b.x<<c.x;    
    return 0;
}
