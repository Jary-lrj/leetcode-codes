#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    int c;
    cin>>c;
    for (long long a = 0; a * a <= c; a++)
    {
        double b = sqrt(c - a * a);
        if ((int)b == b)
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << true << endl;
    else
        cout << false << endl;
    return 0;
}