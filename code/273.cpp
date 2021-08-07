#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string getNum(int num)
    {
        unordered_map<int, string> name;
        name[0] = "Zero", name[1] = "One", name[2] = "Two", name[3] = "Three", name[4] = "Four", name[5] = "Five", name[6] = "Six",
        name[7] = "Seven", name[8] = "Eight", name[9] = "Nine", name[10] = "Ten", name[11] = "Eleven", name[12] = "Twelve", name[13] = "Thirteen",
        name[14] = "Fourteen", name[15] = "Fifteen", name[16] = "Sixteen", name[17] = "Seventeen", name[18] = "Eighteen", name[19] = "Nineteen",
        name[20] = "Twenty", name[30] = "Thirty", name[40] = "Forty", name[50] = "Fifty", name[60] = "Sixty", name[70] = "Seventy", name[80] = "Eighty",
        name[90] = "Ninety", name[100] = "Hundred";
        int digits[3] = {0, 0, 0};
        digits[2] = num / 100;
        num %= 100;
        if (num > 20)
        {
            digits[1] = num / 10;
            num %= 10;
            digits[0] = num;
        }
        digits[0] = num;
        string ans = "";
        if (digits[2] != 0)
        {
            ans += name[digits[2]] + " " + name[100];
            if (digits[1] != 0)
            {
                if (digits[1] == 1)
                    ans += " " + name[10 + digits[0]];
                else
                {
                    if (digits[0] == 0)
                        ans += " " + name[digits[1] * 10];
                    else
                        ans += " " + name[digits[1] * 10] + " " + name[digits[0]];
                }
                //                    if (digits[1] == 0)
                //                    ans += " " + name[digits[0]];
                //                else
                //                    ans += " " + name[digits[1] * 10] + " " + name[digits[0]];
            }
            else if (digits[1] == 0)
            {
                if (digits[0] != 0)
                    ans += " " + name[digits[0]];
            }
        }
        else if (digits[2] == 0)
        {
            if (digits[1] != 0)
            {
                if (digits[1] == 1)
                    ans += name[10 + digits[0]];
                else
                {
                    if (digits[0] == 0)
                        ans += name[digits[1] * 10];
                    else
                        ans += name[digits[1] * 10] + " " + name[digits[0]];
                }
            }
            else if (digits[1] == 0)
            {
                if (digits[0] != 0)
                    ans += name[digits[0]];
            }
        }
        return ans;
    }

    string numberToWords(int num)
    {
        int nums[11];
        memset(nums, 0, sizeof(nums));
        unordered_map<int, string> name;
        name[0] = "Zero", name[1] = "One", name[2] = "Two", name[3] = "Three", name[4] = "Four", name[5] = "Five", name[6] = "Six",
        name[7] = "Seven", name[8] = "Eight", name[9] = "Nine", name[10] = "Ten", name[11] = "Eleven", name[12] = "Twelve", name[13] = "Thirteen",
        name[14] = "Fourteen", name[15] = "Fifteen", name[16] = "Sixteen", name[17] = "Seventeen", name[18] = "Eighteen", name[19] = "Nineteen",
        name[20] = "Twenty", name[30] = "Thirty", name[40] = "Forty", name[50] = "Fifty", name[60] = "Sixty", name[70] = "Seventy", name[80] = "Eighty",
        name[90] = "Ninety", name[100] = "Hundred", name[1000] = "Thousand", name[1000000] = "Million", name[1000000000] = "Billion";
        string ans = "";
        int index = 0;
        if (num <= 20)
            return name[num];
        nums[1] = num % 100;
        num /= 100;
        if (nums[1] >= 20)
        {
            nums[0] = nums[1] % 10;
            nums[1] -= nums[0];
        }
        nums[2] = num % 10;
        num /= 10;
        nums[3] = num % 1000;
        num /= 1000;
        nums[4] = num % 1000;
        num /= 1000;
        nums[5] = num;
        for (int i = 5; i >= 0; i--)
        {
            if (i == 5 && nums[i] != 0)
                ans += getNum(nums[i]) + " " + name[1000000000] + " ";
            if (i == 4 && nums[i] != 0)
                ans += getNum(nums[i]) + " " + name[1000000] + " ";
            if (i == 3 && nums[i] != 0)
                ans += getNum(nums[i]) + " " + name[1000] + " ";
            if (i == 2 && nums[i] != 0)
                ans += getNum(nums[i]) + " " + name[100] + " ";
            if (i == 1 && nums[i] != 0)
                ans += getNum(nums[i]) + " ";
            if (i == 0 && nums[i] != 0)
                ans += getNum(nums[i]) + " ";
        }
        if (ans[ans.length() - 1] == ' ')
            ans = ans.substr(0, ans.length() - 1);
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.numberToWords(790000000) << endl;
    return 0;
}