#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    int boys[100]{0}, girls[100]{0};
    int less, diff, count;
    count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> boys[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> girls[i];
    }

    sort(boys, boys + n);
    sort(girls, girls + m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            diff = abs(boys[i] - girls[j]);
            if (diff <= 1 && boys[i] != -1 && girls[j] != -1)
            {
                count++;
                boys[i] = -1;
                girls[j] = -1;
            }
            //cout << " Diff: " << diff;
        }
    }
    cout << endl;
    cout << count << endl;

    return 0;
}