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
    if (y < 0)
    {
        return 0;
    }
    int ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans *= x;
        }
        y >>= 1;
        x *= x;
    }
    return ans;
}

void solve()
{
    int n;
    fastscan(n);
    int x = n;
    int exp = 0;
    int count = 0;
    while (x > 0)
    {
        if (x & 1)
        {
            exp = count;
        }
        count++;
        x >>= 1;
    }
    int ans = n - power(2, exp) + 1;
    ans = std::max(ans, power(2, exp) - power(2, exp - 1));
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