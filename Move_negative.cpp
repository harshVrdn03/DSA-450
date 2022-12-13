#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    sort(v.begin(), v.end());
    for (auto &element : v)
    {
        cout << element << " ";
    }
}