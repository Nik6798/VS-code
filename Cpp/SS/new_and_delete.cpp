#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int;       //it must be of type pointer
    float *b = new float(); // you can also use brackets like you use in java
    cout << b << endl;
    *b = 23;
    cout << *b << endl;
    delete b;
    cout << *b;//after freeing the memory the pointer still pointing to the memory location
    return 0;
}