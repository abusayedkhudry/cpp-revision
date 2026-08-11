#include <bits/stdc++.h>
using namespace std;
void fun(int N, int A[])
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        if (min >= A[i])
        {
            min = A[i];
        }
        if (max <= A[i])
        {
            max = A[i];
        }
    }
    cout << min << " " << max;
}
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    fun(N, A);
    return 0;
}