#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        unordered_map<char, string> phoneNum;
        vector<string> ans;
        int len = digits.length();
        if (len <= 0)
            return;
        phoneNum['2'] = "abc";
        phoneNum['3'] = "def";
        phoneNum['4'] = "ghi";
        phoneNum['5'] = "jkl";
        phoneNum['6'] = "mno";
        phoneNum['7'] = "pqrs";
        phoneNum['8'] = "tuv";
        phoneNum['9'] = "wxyz";
        string combination;
        backtrack(ans, phoneNum, digits, 0, combination);
        return ans;
    }
    void backtrack(vector<string> &combinations, const unordered_map<char, string> &phoneNum, const string &digits, int index, string &combination)
    {
        if (index == digits.length())
            combinations.push_back(combination);
        else
        {
            char digit = digits[index];
            const string &letters = phoneNum.at(digit);
            for (const char &letter : letters)
            {
                combination.push_back(letter);
                backtrack(combinations, phoneNum, digits, index + 1, combination);
                combination.pop_back();
            }
        }
    }
};
int main()
{
}