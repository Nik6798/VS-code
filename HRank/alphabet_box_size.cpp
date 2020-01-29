#include <bits/stdc++.h>
using namespace std;
#define pb push_back
typedef vector<int> vi;
typedef long long ll;

//main logic
int designerPdfViewer(vector<int> h, string word)
{
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    map<char, int> ch;
    int max = 0;
    for (int i = 0; i < h.size(); i++)
    {
        ch[alphabet[i]] = h[i];
    }
    for (int j = 0; j < word.size(); j++)
    {
        if (max < ch[word[j]])
        {
            max = ch[word[j]];
        }
    }

    return max * word.size();
}

int main(int argc, char const *argv[])
{
    vi vec = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7};
    string s = "zaba";
    cout << designerPdfViewer(vec, s);
    return 0;
}
