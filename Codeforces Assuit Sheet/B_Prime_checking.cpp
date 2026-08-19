#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;

    // ১ বা তার চেয়ে ছোট সংখ্যা প্রাইম (মৌলিক) নয়
    if (n <= 1) {
        cout << "NO\n";
        return 0;
    }

    // sqrt(N) পর্যন্ত চেক করা
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}