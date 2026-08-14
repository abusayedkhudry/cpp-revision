#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // ১. int এর জায়গায় long long ব্যবহার করা হয়েছে
    long long A, B;
    cin >> A >> B;

    // min, max ঠিক করা
    long long mx = max(A, B);
    long long mn = min(A, B);

    // ১ থেকে mx এবং ১ থেকে (mn - 1) এর হিসাব

    // Total Sum
    long long sumx = (mx * (mx + 1)) / 2;
    long long sumi = ((mn - 1) * mn) / 2;
    long long sumall = sumx - sumi;
    cout << sumall << endl;

    // Even Sum
    long long mxnum = mx / 2;
    long long minum = (mn - 1) / 2;
    long long sumxeven = mxnum * (mxnum + 1);
    long long sumieven = minum * (minum + 1); // ব্র্যাকেট ঠিক করা হয়েছে
    long long sumeven = sumxeven - sumieven;
    cout << sumeven << endl;

    // Odd Sum
    long long mxnumod = (mx + 1) / 2;
    long long minumod = mn / 2; // (mn - 1 + 1) / 2 = mn / 2
    long long sumxodd = mxnumod * mxnumod;
    long long sumiodd = minumod * minumod;
    long long sumodd = sumxodd - sumiodd;
    cout << sumodd << endl;

    return 0;
}