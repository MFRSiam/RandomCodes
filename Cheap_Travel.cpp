#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    int special_total_packs;
    int special_total_tickets;
    int spceial_price;
    int left;
    int left_price;
    cin >> n >> m >> a >> b;
    special_total_packs = (n / m);
    special_total_tickets = special_total_packs * m;
    spceial_price = special_total_packs * b;

    if (special_total_packs == n)
    {
        cout << spceial_price << endl;
    }
    else
    {
        left = n - special_total_tickets;
        left_price = left * a;
        cout << spceial_price + left_price << endl;
    }

    return 0;
}