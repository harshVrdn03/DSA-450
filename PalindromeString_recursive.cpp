#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void checkPalindrome(string str, int start, int end)
{
    if (start > end)
    {
        cout << " : Yes : ";
        return;
    }
    else if ((char)str[start] == (char)str[end - 1])
    {
        checkPalindrome(str, start + 1, end - 1);
    }
    else
    {
        cout << " : NO : ";
        return;
    }
}
int main()
{
    string str = "nitin";
    checkPalindrome(str, 0, str.length());
}