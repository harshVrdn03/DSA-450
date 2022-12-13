#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{-2, -3, 4, -1, -2, 1, 5, -3};
    int max = 0, cur = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cur += v[i];
        if (cur > max)
            max = cur;
        if (cur < 0)
            cur = 0;
    }
    cout << max << endl;
}