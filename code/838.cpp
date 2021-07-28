#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = ".L.R...LR..L..";
    string s1 = s, s2 = s;
    int len = s.size();
    int left[100001], right[100001];
    memset(left, 0, sizeof(left));
    memset(right, 0, sizeof(right));
    for (int i = 0; i < len; i++)
    {
        if (s1[i] == 'R' && s1[i + 1] == '.')
        {
            s1[i + 1] = 'R';
            left[i + 1] = left[i] + 1;
        }
    }
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s2[i] == 'L' && s2[i - 1] == '.')
        {
            s2[i - 1] = 'L';
            right[i - 1] = right[i] + 1;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (s1[i] != s2[i])
        {
            if ((s1[i] == 'L' && s2[i] == '.') || (s1[i] == '.' && s2[i] == 'L'))
                s1[i] = 'L';
            if ((s1[i] == 'R' && s2[i] == '.') || (s1[i] == '.' && s2[i] == 'R'))
                s1[i] = 'R';
            if ((s1[i] == 'R' && s2[i] == 'L') || (s1[i] == 'L' && s2[i] == 'R'))
            {
                if (left[i] > right[i])
                    s1[i] = 'L';
                if (left[i] == right[i])
                    s1[i] = '.';
                if (left[i] < right[i])
                    s1[i] = 'R';
            }
        }
    }
    cout << s1 << " " << s2 << endl;
    for (int i = 0; i < len; i++)
        cout << left[i] << " ";
    cout << endl;
    for (int i = 0; i < len; i++)
        cout << right[i] << " ";
    cout << endl;
    return 0;
}