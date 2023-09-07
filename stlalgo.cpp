#include <iostream>
#include <bits/stdc++.h>   //vector ,array , string
#include <algorithm>
// #include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    cout << "Before Rotate:";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Finding 5: " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Lower Bound: " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound: " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << s << endl;
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate:";
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}