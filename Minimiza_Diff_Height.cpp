#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 15, 10};
    //{7,10,11,11,11,12}    +++
    // {4, 7, 8, 8, 8, 9};   ---
    //{1,4,5,5,5,6}
    sort(v.begin(), v.end());
    int k = 3;
    int maxh = v[v.size() - 1];
    int minh = v[0];
    int ans = maxh - minh;
    for (int i = 0; i < v.size(); i++)
    {
        int tempMaxh = max(maxh - k, v[i] + k);
        int tempMinh = min(minh + k, v[i] - k);
        ans = min(ans, tempMaxh - tempMinh);
    }
    cout << ans << " ";
}