#include<bits/stdc++.h>
using namespace std;

class Dost{
    private:
    int val1,val2;
    public:
    Dost(){
        val1=58;
        val2=25;
    }

    friend void fun(Dost c){
    cout<<c.val1<<" "<<c.val2;
}

};


int main(int argc, char const *argv[])
{
    Dost c;
    fun(c);
    return 0;
}
