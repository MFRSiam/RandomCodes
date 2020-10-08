#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int numbers[200] = {0};

    for (int i = 0; i < input.size(); i++)
    {
        numbers[input[i]]++;
    }
    for (int i = 0; i < 200; i++)
    {
        cout << numbers[i] << char(i) << endl;
    }
    int count = 0;
    for (int j = 0; j < 200; j++)
    {
        if (numbers[j] > 0)
        {
            count++;
            cout << count << endl;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}