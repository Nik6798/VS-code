#include <iostream>
#include<string>
#include<vector>
using namespace std;
int subsequence(string s)
{
    if(s.size()<=2){
        return 0;
    }
    vector<int> strlen;
    int count = 1;
    int ret = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'r' && s[i + 1] == 'g')
        {
            count++;
            continue;
        }
        else if (s[i] == 'g' && s[i + 1] == 'b')
        {
            count++;
            continue;
        }
        else if (s[i] == 'b' && s[i + 1] == 'r')
        {
            count++;
            continue;
        }
        else
        {
            if (count >= 3)
            {
                strlen.push_back(count);
                count = 1;
            }
        }
    }
    for (int i : strlen)
    {
        ret += ((i - 1) * (i - 2)) / 2;
    }
    return ret;
}
int main(int argc, char const *argv[])
{
    string s1 = "rgdgddfdgggrgb";
    string s2 = "rgb";
    string s3 = "brgb";
    string s4 = "rg";
    string s5 = "b";
    int result = subsequence(s1);
    cout << "the result : " << result;
    return 0;
}
