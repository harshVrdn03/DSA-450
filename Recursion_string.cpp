#include <bits/stdc++.h>
using namespace std;
string reverse(string str, int len)
{
    if (str.length() == 0)
        return "";
    if (str[0] == 'p' && str[1] == 'i')
    {
        return "3.14" + reverse(str.substr(2), str.length());
    }
    else
    {
        return str[0] + reverse(str.substr(1), str.length());
    }
}
int main()
{
    string str = "pippxxppiixipi";
    cout << reverse(str, str.length());
}