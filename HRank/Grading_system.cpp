#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> grades = {75, 29, 45, 44, 99, 67, 38, 33};
    vector<int> final_grades;
    int multiple_of_five;
    for (int i = 0; i < grades.size(); i++)
    {
        multiple_of_five = grades[i] % 5;
        if (grades[i] < 38)
        {
            final_grades.push_back(grades[i]);
        }
        else if ((multiple_of_five > 2) && (multiple_of_five + grades[i]) <= 100 && multiple_of_five != 0)
        {
            final_grades.push_back(grades[i] + (5 - multiple_of_five));
        }
        else
        {
            final_grades.push_back(grades[i]);
        }
    }

    for (int i = 0; i < final_grades.size(); i++)
    {
        cout << final_grades[i] << " ";
    }

    return 0;
}