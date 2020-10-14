#include <iostream>

using namespace std;

int main()
{
    int a, b, t;
    int sum;
    int square;
    int i;
    cin >> t;
    while (t--)
    {
        square = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << (a + b) * (a + b) << endl;
        }
        else
        {
            sum = 2 * (a * b);
            for (i = 0; i < sum; i++)
            {
                if ((i * i) >= sum)
                {
                    square = i;
                    break;
                }
            }
            //cout << "I =" << i << " Square: " << square << endl;
            cout << square * square << endl;
        }
    }

    return 0;
}