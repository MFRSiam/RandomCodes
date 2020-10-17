#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char l[26];

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, a, b;
        scanf("%d %d %d", &n, &a, &b);
        for (int i = 0; i < b; i++)
        {
            l[i] = i + 'a'; //Construct the alphabet
        }

        int j = 0;
        for (int i = 0; i < n; i++)
        {
            printf("%c", l[j]);
            j = (j + 1) % b;
        }

        printf("\n");
    }

    return 0;
}