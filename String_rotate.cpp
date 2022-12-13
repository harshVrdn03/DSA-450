#include <bits/stdc++.h>
using namespace std;
void checkRotate(string str, string target, string ans)
{
    ans = "";
    if (str.length() < target.length())
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < target.length(); i++)
    {
        ans += str[i];
    }
    // cout << ans << endl;
    if (ans == target)
    {
        cout << "YES" << endl;
        return;
    }
    checkRotate(str.substr(1), target, ans);
}
int main()
{
    string str1 = "ABCDAAWERD";
    // ATCDADAABC
    string str2 = "WERDA";
    string ex = str1;
    string ans = "";
    for (int i = 0; i < str1.length(); i++)
    {
        ex += str1[i];
    }
    checkRotate(ex, str2, ans);
}