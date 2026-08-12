#include <bits/stdc++.h>
using namespace std;
int *fun(int n)
{
    int *P = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> P[i];
    }
    return P;
}
int main()
{
    int n;
    cin >> n;
    int *P = fun(n);
    for (int i = 0; i < n; i++)
    {
        cout << P[i] << " ";
    }
    return 0;
}