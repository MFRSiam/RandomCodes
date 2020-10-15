#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    int n;
    long long x[50];
    int difference;
    cin >> t;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        sort(x, x + n);
        vector<int> v;
        for (int i = 1; i < n; i++)
        {
            difference = x[i] - x[i - 1];
            //cout << difference << " ";
            v.push_back(difference);
        }
        sort(v.begin(), v.end());
        cout << v[0] << endl;
    }

    return 0;
}