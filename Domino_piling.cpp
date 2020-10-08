#include <iostream>

using namespace std;

int main()
{

    int m, n, count, excess;

    cin >> m >> n;
    excess = count = 0;
    for (int i = 0; i < m; i++)
    {
        count = n / 2 + count;

        if (n % 2 != 0)
        {
            excess++;
        }
        if (excess == 2)
        {
            //cout << "The N:" << n << " Excess: " << excess << endl;
            count++;
            excess = 0;
        }
        //cout << "Excess: " << excess << endl;
    }

    cout << count << endl;

    return 0;
}