#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

int main()
{
    //first way by "Pushing values"
    vi vec1;
    vec1.push_back(10);
    for (int i : vec1)
    {
        cout << i << " ";
    }
    cout << endl;

    //second way by "Specifing size and initialize all value"
    // int n = 3;
    vi vec2(3, 65);
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << endl;

    //third way by "initialzing like an array"
    vi vec3{1, 2, 3, 4};
    for (int i : vec3)
    {
        cout << i << " ";
    }
    cout << endl;

    //fourth way by "initialzing from array"
    vi vec4 = {2, 34, 5};
    for (int i : vec4)
    {
        cout << i << " ";
    }
    cout << endl;

    //"initialzing form another vector"
    vi vec5(vec3.begin(), vec3.end());
    for (int i : vec5)
    {
        cout << i<<" ";
    }
    cout << endl;
}