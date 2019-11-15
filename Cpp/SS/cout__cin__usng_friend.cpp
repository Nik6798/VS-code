#include<bits/stdc++.h>
using namespace std;
class Friend{
    public:
    int x=34,y=45;
    friend istream& operator>>(istream& din,Friend&);
    friend ostream& operator<<(ostream& dout,Friend b){
        dout<<b.x<<b.y;              //it is possible to defines friend fun inside the class
         return cout;
        }                                   
        
}z;

istream& operator>>(istream& din,Friend& a){
        din>>a.x>>a.y;
        return din;
}


int main(int argc, char const *argv[])
{
    cin>>z;
    cout<<z;
    return 0;
}
