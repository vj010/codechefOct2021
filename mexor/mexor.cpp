#include <bits/stdc++.h>
#define endl "\n"

void fastscan(int &number)
{

    bool negative = false;
    register int c;

    number = 0;

    c = getchar();
    if (c == '-')
    {

        negative = true;

        c = getchar();
    }

    for (; (c > 47 && c < 58); c = getchar())
        number = number * 10 + c - 48;

    if (negative)
        number *= -1;
}

int power(int x, int y)
{
    int res = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            res *= x;
        }
        y >>= 1;
        x *= x;
    }
    return res;
}

void solve()
{
    int x;
    fastscan(x);
    int e = x;
    if (x == 0)
    {
        std::cout << 1 << endl;
        return;
    }
    if (x == 1)
    {
        std::cout << 2 << endl;
        return;
    }
    int count = 0;
    int exp;
    while (x > 0)
    {
        if (x & 1)
            exp = count;
        x >>= 1;
        count++;
    }
    int ans = power(2, exp);
    int ans1 = power(2, exp + 1);
    if (e == ans1 - 1)
        std::cout << ans1 << endl;
    else
        std::cout << ans << endl;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int q;
    fastscan(q);
    while (q--)
    {
        solve();
    }
    return 0;
}