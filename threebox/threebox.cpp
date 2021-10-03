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
    int a, b, c, d;
    fastscan(a);
    fastscan(b);
    fastscan(c);
    fastscan(d);
    int number_of_bags = 0;
    int e = d;
    int objects_remaining = 3;

    if (a + b + c <= d)
    {
        number_of_bags = 1;
    }
    else if (a + b <= d || b + c <= d || a + c <= d)
    {
        number_of_bags = 2;
    }
    else
    {
        number_of_bags = 3;
    }

    std::cout << number_of_bags << endl;
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