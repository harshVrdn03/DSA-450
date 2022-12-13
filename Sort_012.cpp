#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int zero_count = 0, one_count = 0, two_count = 0;
    for (auto &element : v)
    {
        if (element == 0)
            zero_count += 1;
        else if (element == 1)
            one_count += 1;
        else if (element == 2)
            two_count += 1;
    }
    for (int i = 0; i < zero_count; i++)
    {
        cout << 0 << " ";
    }
    for (int i = 0; i < one_count; i++)
    {
        cout << 1 << " ";
    }
    for (int i = 0; i < two_count; i++)
    {
        cout << 2 << " ";
    }
    return 0;
}