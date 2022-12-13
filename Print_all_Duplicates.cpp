#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "harshvardhansingh";
    set<char> set;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (count(str.begin(), str.end(), str[i]) > 1)
            set.insert(str[i]);
    }
    for (auto &element : set)
    {
        cout << element << " --> " << count(str.begin(), str.end(), element) << endl;
    }
}