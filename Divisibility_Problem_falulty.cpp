#include <iostream>

using namespace std;

int devisior(int a, int b, int c)
{

    if (a % b == 0)
    {
        return c;
    }
    else
    {
        return devisior(a + 1, b, c + 1);
    }
}

int main()
{

    int n;
    cin >> n;
    int *a = new int(n);
    int *b = new int(n);
    int *count = new int(n);
    count = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "A: " << a[i] << " B: " << b[i] << endl;
    }

    cout << devisior(10, 4, 0) << endl;
    cout << "SSSS" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Finished" << endl;
        count[i] = devisior(a[i], b[i], 0);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Count: " << count[i] << endl;
    }

    return 0;
}