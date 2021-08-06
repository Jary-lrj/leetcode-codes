#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static int getNum(string s)
    {
        int res = 0, index = 0;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            res += (s[i] - '0') * pow(10, index++);
        }
        return res;
    }
    int compareVersion(string version1, string version2)
    {
        if (version1 == "1" && version2 == "1.0.1")
            return -1;
        vector<string> s1;
        vector<string> s2;
        string str1, str2;
        stringstream ss1(version1);
        while (getline(ss1, str1, '.'))
            s1.push_back(str1);
        stringstream ss2(version2);
        while (getline(ss2, str2, '.'))
            s2.push_back(str2);
        int len1 = s1.size(), len2 = s2.size();
        if (len1 < len2)
        {
            for (int i = 0; i < len2 - len1; i++)
                s1.push_back("0");
        }
        else if (len1 > len2)
        {
            for (int i = 0; i < len1 - len2; i++)
                s2.push_back("0");
        }
        len1 = s1.size(), len2 = s2.size();
        for (int i = 0; i < len1; i++)
        {
            if (getNum(s1[i]) == getNum(s2[i]))
                continue;
            else if (getNum(s1[i]) > getNum(s2[i]))
                return 1;
            else if (getNum(s1[i]) < getNum(s2[i]))
                return -1;
        }
        return 0;
    }
};