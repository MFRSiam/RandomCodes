#include <iostream>

using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > h)
        {
            count = count + 2;
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

/* int n, h;
    int count = 0;
    cin >> n >> h;
    int *heights = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (heights[i] > h)
        {
            count = count + 2;
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;

    */