#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{22, 14, 8, 17, 35, 3, 1};
    int k = 3;
    sort(v.begin(), v.end());
    cout << "K-min: " << v[k - 1] << endl;
    // max from k last
    cout << "K-max: " << v[v.size() - 1 - (k - 1)] << endl;
}