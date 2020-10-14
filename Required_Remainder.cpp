#include <iostream>

using namespace std;

int main()
{
    long x, y, n, k, t, i;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        for (i = n; i >= 0; i--)
        {
            if (i % x == y)
            {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}