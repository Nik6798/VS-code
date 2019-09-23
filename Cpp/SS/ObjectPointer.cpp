#include<bits/stdc++.h>
using namespace std;
class Rect
{
private:
    int x, y, z;

public:
    Rect(int x,int y,int z) {
        this->x = x;
        this->y = y;
        this->z= z;
    }

    void Printvalue(){
        cout << x << " " << y << " " << z<<endl;
    }
    ~Rect() {}
};
int main(){
    Rect *p, box(10, 34, 53);
    box.Printvalue();
    Rect square(10, 10, 10);
    p = &square;
    p->Printvalue();
    return 0;
}