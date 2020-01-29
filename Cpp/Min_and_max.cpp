#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[] = {1, 4, 2, 8, 99, 34, 13};
//     auto min = INT_MAX;
//     auto max = INT_MIN;
//     for(int i:arr){
//         if(i<min){
//             min = i;
//         }

//         if(max<i){
//             max = i;
//         }
//     }

//     cout << max<<" "<< min;
//     return 0;
// }

//2nd method
// int main(int argc, char const *argv[])
// {
//     int arr[] = {2, 34, 6, 3, 1464, 43};
//     pair<int*, int*> minmax= minmax_element(begin(arr), end(arr));
//     cout << *minmax.first << " " << *minmax.second;
//     return 0;
// }

//3rd method
int main(int argc, char const *argv[])
{
    int arr[] = {2, 34, 6, 3, 1464, 43};
    vector<int> a{2, 4, 673, 44, 357, 34};
    vector<int> b = a;
    int *min = min_element(begin(arr), end(arr));
    int *max = max_element(begin(arr), end(arr));
    auto maxv = max_element(a.begin(), a.end());
    auto maxvb = max_element(b.begin(), b.end());
    cout << *min << " " << *max << " " << *maxv<<" "<<*maxvb;
    return 0;
}


