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

void solve()
{
    int a, b;
    fastscan(a);
    fastscan(b);
    if (a == 0)
    {
        std::cout << "Liquid" << endl;
        return;
    }
    if (b == 0)
    {
        std::cout << "Solid" << endl;
        return;
    }

    std::cout << "Solution" << endl;
    return;
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