#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int n;
    double volumes[100];
    double totalvolume = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> volumes[i];
    }

    for (int i = 0; i < n; i++)
    {
        volumes[i] = volumes[i] / 100;
        totalvolume += volumes[i];
    }
    //66.666666666667
    cout << setprecision(12) << (totalvolume / n) * 100 << endl;

    return 0;
}