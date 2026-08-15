#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string N;
    long long X;
    if (!(cin >> N >> X)) return 0;

    long long rem = 0;
    for (char d : N) {
        rem = (rem * 10 + (d - '0')) % X;
    }

    if (rem == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N, X;
//     cin >> N >> X;
//     if (N % X == 0)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }
//     return 0;
// }