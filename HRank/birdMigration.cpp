#include <bits/stdc++.h>
using namespace std;
int migratoryBirds(vector<int> arr)
{
    int traversed[arr.size()] = {0};
    map<int, int> repeated;
    for (int i = 0; i < arr.size(); i++)
    {
        if (traversed[i] == 0)
        {
            int count = 0;
            for (int j = i; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                {
                    ++count;
                    traversed[j] = 1;
                }
            }
            repeated[arr[i]] = count;
        }
    }

    for (auto i : repeated)
    {
        cout << i.first << " " << i.second << endl;
    }
    int max = INT_MIN, index = 0;
    for (auto i : repeated)
    {
        if (max < i.second)
        {
            max = i.second;
            index = i.first;
        }
    }
    return index;
}
int main()
{
    vector<int> ar{1, 2, 4, 5, 4, 3, 3, 1, 3, 4};
    cout << migratoryBirds(ar);
    return 0;
}