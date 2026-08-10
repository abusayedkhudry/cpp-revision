#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mn = min(a, b);
    int mx = max(a, b);
    cout << mn << " " << mx << endl;
    int mn1 = min({a, b, c, d});
    int mx1 = max({a, b, c, d});
    cout << mn1 << " " << mx1 << endl;
    return 0;
}