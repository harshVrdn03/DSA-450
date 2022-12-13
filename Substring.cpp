#include <bits/stdc++.h>
using namespace std;
void subString(string str, int idx, string ans)
{
    if (idx == str.length())
    {
        cout << ans << endl;
        return;
    }
    subString(str, idx + 1, ans + " " + str[idx]);
    subString(str, idx + 1, ans);
}
int main()
{
    string str = "123";
    string ans = "";
    vector<string> v;
    subString(str, 0, ans);
    return 0;
}