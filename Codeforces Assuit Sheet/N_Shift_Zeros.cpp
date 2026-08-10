#include <bits/stdc++.h>
using namespace std;
void fun(int N, int A[])
{
    int zero = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
        {
            zero++;
            continue;
        }
        cout << A[i] << " ";
    }
    for (int i = 0; i < zero; i++)
    {
        cout << 0 << " ";
    }
}
int main()
{
    int N;
    cin >> N;
    int A[1001];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    fun(N, A);

    return 0;
}