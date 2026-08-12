#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // dynamic memory khullam
    int *a = new int[n];

    // dynamic memory input nilam
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // dynamic memory output korlam
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // dynamic memory delete korbo
    delete[] a;

    // ekhon jodi amra array ta print
    // kori tahole dekhbo je array ta ar print hocche na!
    // gurbeh value print hobe
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}