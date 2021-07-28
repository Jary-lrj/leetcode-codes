#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        stack<int> score;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] != "+" && ops[i] != "C" && ops[i] != "D")
                score.push(atoi(ops[i].c_str()));
            else if (ops[i] == "+")
            {
                int n1 = score.top();
                score.pop();
                int n2 = score.top();
                score.pop();
                score.push(n2);
                score.push(n1);
                score.push(n1 + n2);
            }
            else if (ops[i] == "C")
                score.pop();
            else if (ops[i] == "D")
                score.push(2 * score.top());
        }
        int sum = 0;
        while (!score.empty())
        {
            sum += score.top();
            score.pop();
        }
        return sum;
    }
};
int main()
{
    
}