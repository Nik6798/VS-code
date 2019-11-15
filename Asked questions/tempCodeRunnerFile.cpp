void checkMagazine(vector<string> magazine, vector<string> note)
{
    int count = 0;
    for (int i = 0; i < magazine.size(); i++)
    {
        for (int j = 0; j < note.size(); j++)
        {
            if (magazine[i] == note[i])
            {
                count++;
            }
        }
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