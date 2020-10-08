#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int x[4]{0};
    int count = 0;
    for (int i = (input + 1); i < 10000; i++)
    {
        x[0] = i / 1000;
        x[1] = (i / 100) % 10;
        x[2] = (i / 10) % 10;
        x[3] = i % 10;
        for (int j = 0; j < 4; j++)
        {
            for (int k = (j + 1); k < 4; k++)
            {
                if (x[j] != x[k])
                {
                    count++;
                }
            }
        }
        if (count == 6)
        {
            cout << i << endl;
            break;
        }
        //cout << "Count : " << count << "I: " << i << endl;
        count = 0;
    }

    return 0;
}