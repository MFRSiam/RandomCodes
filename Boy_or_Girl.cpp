#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int x[100], a, status, dictinct;
    cin >> input;
    a = status = 0;
    for (int i = 0; i < input.size(); i++)
    {
        x[i] = input[i];
        cout << input[i] << " " << a << endl;
        a++;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = (i + 1); j < a; j++)
        {
            if (x[i] == x[j])
            {
                cout << input[i] << " And " << input[j] << "Status " << status << endl;
                status++;
            }
        }
    }
    cout << "Status : " << status;
    dictinct = a - status;
    cout << "Final Status and Distinct " << status << " " << dictinct << endl;
    if (dictinct % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}