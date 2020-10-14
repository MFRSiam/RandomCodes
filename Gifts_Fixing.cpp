#include <iostream>

using namespace std;

int main()
{
    int t;
    int n;
    long long a[50], b[50];
    long long lowestindex_a, lowestindex_b;
    long long num_of_moves_a;
    long long num_of_moves_b;
    long long total;
    cin >> t;
    lowestindex_a = lowestindex_b = 0;
    while (t--)
    {
        lowestindex_a = 0;
        lowestindex_b = 0;
        n = 0;
        a[50] = {0};
        b[50] = {0};
        num_of_moves_a = 0;
        num_of_moves_b = 0;
        total = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < a[lowestindex_a])
            {
                lowestindex_a = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < b[lowestindex_b])
            {
                lowestindex_b = i;
            }
        }
        //cout << "Lowest Index of A: " << lowestindex_a << " and Number : " << a[lowestindex_a] << endl;
        //cout << "Lowest Index of B: " << lowestindex_b << " and Number : " << b[lowestindex_b] << endl;
        for (int i = 0; i < n; i++)
        {
            num_of_moves_a = a[i] - a[lowestindex_a];
            num_of_moves_b = b[i] - b[lowestindex_b];
            total = total + max(num_of_moves_a, num_of_moves_b);
        }
        cout << total << endl;
    }

    return 0;
}