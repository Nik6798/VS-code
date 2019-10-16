#include <bits/stdc++.h>
using namespace std;
void checkMagazine(vector<string> magazine, vector<string> note)
{
    sort(magazine.begin(),magazine.end());
    sort(note.begin(),note.end());
    int i=0,j=0,count=0;
    while(i<magazine.size()&&j<note.size()){
        if(magazine[i]==note[j]){
            count++;
            j++;
        }
        i++;
    }
    if (count == note.size())
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
int main()
{
    vector<string> magazine{"today", "me", "one", "give", "grand"};
    vector<string> note = {"today", "give", "one", "grand", "today"};
    checkMagazine(magazine, note);
    return 0;
}