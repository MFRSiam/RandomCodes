#include <iostream>

using namespace std;

int combination(int x)
{
    int count = 0;
    for (int i = x, int j = 0; i > (x / 2), j < i; i--, j++)
    {
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        cout << combination(x) << endl;
    }

    return 0;
}