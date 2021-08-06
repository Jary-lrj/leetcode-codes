#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string simplifyPath(string path)
    {
        stringstream is(path);
        vector<string> strs;
        string res = "", temp = "";
        while (getline(is, temp, '/'))
        {
            if (temp == "" || temp == "/")
                continue;
            else if (temp == ".." && !strs.empty())
            {
                strs.pop_back();
            }
            else if (temp != "..")
                strs.push_back(temp);
        }
        for (string &str : strs)
        {
            res += "/" + str;
        }
        if (res.empty())
            res += "/";
        return res;
    }
};