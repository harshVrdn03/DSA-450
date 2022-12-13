#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{22, 14, 8, 17, 35, 3};
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    cout << max << " " << min << endl;
}