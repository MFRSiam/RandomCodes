#include <iostream>

using namespace std;

int main()
{
    int n, x, y, mishka, cris;
    cin >> n;
    mishka = cris = 0;
    while (n--)
    {
        cin >> x >> y;
        if (x > y)
        {
            mishka++;
        }
        else if (y > x)
        {
            cris++;
        }
    }
    if (mishka > cris)
    {
        cout << "Mishka" << endl;
    }
    else if (mishka == cris)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else
    {
        cout << "Chris" << endl;
    }

    return 0;
}