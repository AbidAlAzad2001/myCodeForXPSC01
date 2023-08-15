#include <bits/stdc++.h>
using namespace std;
int a[104];
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, s = 1;
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] && a[i - 1])
                s += 5;
            else if (a[i])
                s++;
            else if (!a[i - 1] && i > 1)
                s = -1e9;
        }
        printf("%d\n", s > 0 ? s : -1);
    }
}