#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {

        for (int l = 0; l <= n; l++)
        {
            cout << " ";
        }
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int k = -1; k <= (2 * i) - 1; k++)
        {
            if (k == -1 || k == (2 * i) - 1 || i == n)
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         if (j == i + 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i + j == n)
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        for (int k = 0; k < (2 * n) + 1; k++)
        {
            cout << " ";
        }
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}