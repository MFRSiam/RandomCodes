#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;

    if (input % 5 == 0)
    {
        cout << input / 5 << endl;
    }
    else
    {
        cout << (input / 5) + 1 << endl;
    }
}