#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;

    a = new int[5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    //nije value dite pari
    // a[3] = 80;
    // a[4] = 60;

    //othoba input nite pari
    for (int i = 3; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}