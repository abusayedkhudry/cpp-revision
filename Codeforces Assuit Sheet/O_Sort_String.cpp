#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
    // ২৬টি অক্ষরের জন্য কাউন্টার অ্যারে (মেমোরি লাগবে ১ কেবি থেকেও কম)
    int freq[26] = {0};
    // একটি একটি করে ক্যারেক্টার ইনপুট নিয়ে কাউন্ট করা
    for (int i = 0; i < N; i++) {
        char ch;
        cin >> ch;
        freq[ch - 'a']++;
    }
    // 'a' থেকে 'z' পর্যন্ত ক্রমানুসারে প্রিন্ট করা
    for (int i = 0; i < 26; i++) {
        while (freq[i] > 0) {
            cout << (char)(i + 'a');
            freq[i]--;
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     char S[N];
//     getchar();
//     cin.getline(S, 10000001);
//     int len = strlen(S);
//     for (int i = 0; i < len - 1; i++)
//     {
//         for (int j = i + 1; j < len; j++)
//         {
//             if (S[i] > S[j])
//             {
//                 char temp = S[i];
//                 S[i] = S[j];
//                 S[j] = temp;
//             }
//         }
//     }
//     cout << S;
//     return 0;
// }