#include <bits/stdc++.h>
using namespace std;
void permutation(string s, int i, int n)
{
    if (i == n - 1)
    {
        cout << s << endl;
        return;
    }
    for (int j = i; j < n; j++)
    {
        swap(s[i], s[j]);
        permutation(s, i + 1, n);
    }
}
int main()
{
    string str = "ABC";
    permutation(str, 0, str.length());
}