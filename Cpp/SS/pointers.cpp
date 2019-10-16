#include <bits/stdc++.h>
using namespace std;

class Number
{
private:
    int x, y, z;

public:
    void setnumber(int a, int b, int c)
    {
        // x = a, y = b, z = c;
        this->x = a, this->y = b, this->z = c;
    }
    void showNumber()
    {
        cout << x << " " << y << " " << z << endl;
    }
};
int main()
{
    Number integer;
    Number *p = &integer;
    p->setnumber(23, 32, 54);
    p->showNumber();
}