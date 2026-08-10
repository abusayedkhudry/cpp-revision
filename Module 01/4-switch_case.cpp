#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    switch (a)
    {
    case 'A':
        cout << "Excelent\n";
        break;
    case 'B':
        cout << " Good\n";
        break;
    case 'C':
        cout << "Not bad\n";
        break;
    default:
        cout << "not passed\n";
        break;
    }
    return 0;
}