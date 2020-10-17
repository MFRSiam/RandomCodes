#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t, n;
    int permutations[100]{0};
    int count;
    cin >> t;
    while (t--)
    {

        cin >> n;
        n = 2 * n;
        for (int i = 0; i < n; i++)
        {
            cin >> permutations[i];
        }
        //cout << "TEST: " << permutations[0] << endl;
        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = i; j >= 0; j--)
            {
                if (permutations[j] == permutations[i])
                {
                    count++;
                }
            }
            if (count == 1)
            {
                cout << permutations[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}