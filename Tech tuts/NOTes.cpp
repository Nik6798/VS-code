#include <bits/stdc++.h>
using namespace std;

// int main = 22; //can not declared globally ->>"under Q4"
int xyz = 443; //->>under Q7
// static num; //-->>under Q8   show an error the data type is missing
// static int num;//-->>under Q9   show an error the data type is missing
extern int num; //-->>under Q9 
void Q1()
{
    // int EOF = 12;   /*this will give an error because 'EOF' is a Macro which is declared in 'stdio.h' header EOF = -1 so simply you can use EOF as a variable name * /
    cout << EOF; // you can check it by simply printing EOF which is equal to -1
    cout << endl;
}

void Q2()
{
    int printf = 12; //this will not give an error because printf is not a keyword or macro in c++ and you can use it as a variable name or as a function
                     //to support backtracking with c-lang you can use it as a function in cpp by including 'stdio.h' header
                     //but if you declared it in c++ as a variable name then it will not use it as function anymore the functionalty is override.
    cout << printf;
    cout << endl;
}

void Q3()
{
    int ABC = 12;
    // cout << abc; //it will give an error that 'abc' is not define because c++ is an case-sensitive lang.
}

void Q4()
{
    int main = 80; //The name main is not reserved in C++ except as a function in the global namespace.
                   //You are free to declare other entities named main, including among other things, classes,
                   //variables, enumerations, member functions, and non-member functions BUT not in the global namespace.
    cout << main<<endl;
}

void Q5_and_Q6()
{
    int xyz = 13;
    // int xyz;   //it will give an error because you can not declared an entity or variable more than one time
    {
        int xyz = 54;//but this will not give an error because it is declared under a different block. 
        cout << xyz<<" ";
    }
    cout << xyz<<endl;
}

void Q7(){
    int xyz = 23; 
    cout << xyz<<endl;//it will print '23' not '433' because of ''storage classes'' concept which is used to understand the scope and value
}

int main()
{
    Q1();
    Q2();
    Q3();
    Q4();
    Q5_and_Q6();
    Q7();

    //Q8 and Q9
    cout<<num<<endl;
    //Q8 and Q9 end;

    return 0;
}
// int num = 25; //-->Q8 it will give an error because you can not declare a variable more than one time;
int num = 334;

//notes2

// static num = 5; error
int num;
extern int num;

// int main(){
//     register int xyz = 23;
//     auto pqr = 991;
// const int c= xyz+~pqr;
// cout << c;
// return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int abcdefghijklmnopqrstuvwxyz1234567890333333333= 19;
//     cout << abcdefghijklmnopqrstuvwxyz1234567890333333333; //19
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int _ = 12;
//     int __ = 34;
//     cout << _ + __; //46;
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int goto = 3;
//     cout<<goto; goto is predefined
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     cout<<sizeof('A');
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     signed a, x;
//     unsigned b, y;
//     a = (signed)10u;
//     b = (unsigned)-10;
//     y = (signed)10u + (unsigned)-10;
//     x = y;
//     cout << a<<" " << b<<endl;
//     if(x==y){
//         cout << x<<"hell" << y<<endl;
//     }
//     else if (x!=y)
//     {
//         cout << x <<" "<< y;
//     }
    
//     return 0;
// }