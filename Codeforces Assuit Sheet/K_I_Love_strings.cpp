#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        string S, T;
        cin >> S >> T;
        int lenS = S.length();
        int lenT = T.length();
        int maxlen = max(lenS, lenT);
        for (int i = 0; i < maxlen; i++)
        {
            if (i < lenS)
            {
                cout << S[i];
            }
            if (i < lenT)
            {
                cout << T[i];
            }
        }
        cout << endl;
    }
    return 0;
}