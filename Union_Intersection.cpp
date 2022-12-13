#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1{7, 1, 5, 2, 3, 6};
    vector<int> arr2{3, 8, 6, 20, 7};
    set<int> Union;
    vector<int> intersection;
    for (int i = 0; i < arr1.size(); i++)
    {
        Union.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        Union.insert(arr2[i]);
    }
    // intersection
    for (int i = 0; i < arr1.size(); i++)
    {
        // check it is present in the second vector or present in insersection vector
        if (count(arr2.begin(), arr2.end(), arr1[i]) >= 1 && count(intersection.begin(), intersection.end(), arr1[i]) == 0)
        {
            intersection.push_back(arr1[i]);
        }
    }

    cout << "\nUnion\n";
    for (auto &element : Union)
    {
        cout << element << " ";
    }
    cout << "\nIntersection\n";
    for (auto &element : intersection)
    {
        cout << element << " ";
    }
}