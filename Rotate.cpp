#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    int n = v[v.size() - 1];
    // for (int i = v.size() - 2; i >= 0; i--)
    // {
    //     v[i + 1] = v[i];
    // }
    // v[0] = n;
    rotate(v.begin(), v.begin() + 1, v.end());
    for (auto &element : v)
    {
        cout << element << " ";
    }
}