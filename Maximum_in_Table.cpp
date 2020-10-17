#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int arr[10][10]{0};
    int inde_x, inde_y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        arr[0][i] = 1;
        arr[i][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    inde_x = 0;
    inde_y = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i][j] > arr[inde_x][inde_y])
            {
                inde_x = i;
                inde_y = j;
            }
        }
    }

    /*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    */

    cout << arr[inde_x][inde_y] << endl;

    return 0;
}