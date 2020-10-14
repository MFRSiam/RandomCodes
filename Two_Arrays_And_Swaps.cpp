#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a[30];
    long long b[30];
    int t, n, k;
    int small_a, big_b;
    int sum;
    cin >> t;
    while (t--)
    {
        sum = 0;
        small_a = 0;
        big_b = 0;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (k == 1 && n == 1)
        {
            if (a[0] < b[0])
            {
                swap(a[0], b[0]);
            }
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[j] < a[small_a])
                    {
                        small_a = j;
                    }
                }
                for (int l = 0; l < n; l++)
                {
                    if (b[l] > b[big_b])
                    {
                        big_b = l;
                    }
                }
                if (a[small_a] < b[big_b])
                {
                    swap(a[small_a], b[big_b]);
                }

                //cout << a[small_a] << " " << b[big_b] << endl;
            }
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        //cout << "SUM: " << sum << endl;
        cout << sum << endl;
    }

    return 0;
}