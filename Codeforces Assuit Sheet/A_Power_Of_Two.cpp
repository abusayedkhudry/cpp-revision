#include <bits/stdc++.h>
using namespace std;
int fun(long long N)
{
    if (N == 1)
    {
        return 1;
    }
    if (N == 0 || N % 2 != 0)
    {
        return 0;
    }

    return fun(N / 2);
}
int main()
{
    long long N;
    cin >> N;
    int Y = fun(N);
    if (Y == 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}