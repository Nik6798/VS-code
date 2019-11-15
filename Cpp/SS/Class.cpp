#include <iostream>
using namespace std;
class Complex
{
private:
    int a = 10, b = 23;

public:
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    void Printf()
    {
        cout << a << " " << b;
    }
};

int main(int argc, char const *argv[])
{
    Complex num, num2, num3;
    num3 = num.add(num2);
    num3.Printf();
    return 0;
}
