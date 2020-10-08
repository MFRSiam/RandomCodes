#include <iostream>

using namespace std;

int devisior(int a, int b, int c)
{
    int z;
    if (a % b != 0)
    {
        z = a / b;
        z++;
        c = (z * b) - a;
    }
    return c;
}

int main()
{

    int n;
    cin >> n;
    int a;
    int b;
    for (int i = 0; i < n; i++)
    {

        cin >> a >> b;
        cout << devisior(a, b, 0) << endl;
    }

    return 0;
}