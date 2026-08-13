#include <bits/stdc++.h>
using namespace std;
int A[101][101];
int B[101][101];
void fun(int i, int j, int R, int C)
{
    if (i == R)
    {
        return;
    }
    cout << A[i][j] + B[i][j] << " ";
    if (j == C - 1)
    {
        cout << endl;
        fun(i + 1, 0, R, C);
    }
    else
    {
        fun(i, j + 1, R, C);
    }
}
int main()
{
    int R, C;
    cin >> R >> C;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> B[i][j];
        }
    }
    fun(0, 0, R, C);
    return 0;
}