#include <bits/stdc++.h>
using namespace std;
bool checkRotate(string str, string target)
{
    for (int i = 0; i < str.length() - target.length() + 1; i++)
    {
        string ans = "";
        for (int j = i; j < target.length() + i; j++)
        {
            ans += str[j];
        }
        if (ans == target)
        {
            cout << "Yes" << endl;
            break;
        }
    }
}
int main()
{
    string str1 = "ABCDA";
    string str2 = "DAABC";
    for (int i = 0; i < str2.length(); i++)
    {
        str1 += str2[i];
    }
    checkRotate(str1, str2);
}