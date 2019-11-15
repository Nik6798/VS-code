#include<bits/stdc++.h>
using namespace std;
class nik{
    public :
    int a;
    nik(int x){
        a=x;
    }
    // nik sum(nik c){
    //     nik temp(0);
    //     temp.a=a+c.a;
    //     return temp;
    // }

    nik operator +(nik c){
        nik temp(0);
        temp.a=a+c.a;
        return temp;
    }

    nik operator-(){
        
        return -a;
    }

    nik operator++(/*pre-increment*/){           
        return ++a;
    }
    nik operator ++(int/*post-increment*/){
        return a++;
    }
}a1(34),a2(45),a3(0),a4(88),a5(0);
int main(){
cout<<a1.a;
a3=a1.operator +(a2);
a4=a3+a1;
cout<<a3.a<<" "<<a4.a;
a5=-a3;
cout<<a5.a<<endl;
a5=++a4;
// a5=a3-; not possible 
cout<<a5.a<<endl;
a5=a4++;
cout<<a5.a<<endl;
cout<<a5.a;
}
