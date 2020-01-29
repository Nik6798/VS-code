#include<bits/stdc++.h>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple_count = 0, orange_count = 0;
    for (int i = 0; i < apples.size(); i++)
    {
        if (s<=a+apples[i]&&(a+apples[i])<=t)
        {
            apple_count++;
        }
    }
    for (int i = 0; i < oranges.size(); i++)
    {
        if (s<=(b+oranges[i])&&(b+oranges[i])<=t)
        {
            orange_count++;
        }
    }

    cout << apple_count << endl<< orange_count;
}

int main(){
    int s=7, t=11, a=5, b=15;
    vector<int> apple{-2,1,2};
    vector<int> orange{5,-6};

    countApplesAndOranges(s, t, a, b, apple, orange);
   return 0;
} 

