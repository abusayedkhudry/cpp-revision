#include <bits/stdc++.h>
using namespace std;
void fun(int N, long long &bi1, long long &bi2)
{
    if (N == 0)
    {
        return;
    }
    int bi = N % 2;
    bi1 = bi1 * 10 + bi;
    fun(N / 2, bi1, bi2);
    bi2 = bi2 * 10 + bi;
}
int main()
{
    int N;
    cin >> N;
    long long bi1 = 0;
    long long bi2 = 0;
    fun(N, bi1, bi2);
    if (bi1 == bi2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}