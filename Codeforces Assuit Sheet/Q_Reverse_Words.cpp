#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S[1000001];
    cin.getline(S, 1000001);
    int l = strlen(S);
    for (int i = 0; i < l; i++)
    {
        int start = i;

        while (S[i] != ' ' && S[i] != '\0')
        {
            i++;
        }
        for (int j = i - 1; j >= start; j--)
        {
            cout << S[j];
        }
        if (S[i] == ' ')
        {
            cout << " ";
        }
    }
    return 0;
}