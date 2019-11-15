#include <bits/stdc++.h>
using namespace std;
int beautifulDays(int i, int j, int k)
{

    int count = 0;
    vector<int> reversed;
    vector<int> number(abs(j - i + 1));
    iota(number.begin(), number.end(), i);
    for (int n = 0; n < number.size(); n++)
    {
        int numb = number[n];
        int reversedNumber = 0, remainder;
        while (numb != 0)
        {
            remainder = numb % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            numb /= 10;
        }
        reversed.push_back(reversedNumber);
    }

    for (int i = 0; i < reversed.size(); i++)
    {
        int num = abs(reversed[i] - number[i]);
        if (num % k == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    cout << beautifulDays(20, 23, 6);
    return 0;
}