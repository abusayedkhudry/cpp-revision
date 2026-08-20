#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long N;
    if (cin >> N)
    {
        // Direct quadratic equation solution
        long long k = (-1 + sqrt(1 + 8.0 * N)) / 2;

        // Adjust for floating-point precision edge cases
        while ((k + 1) * (k + 2) / 2 <= N)
        {
            k++;
        }
        while (k * (k + 1) / 2 > N)
        {
            k--;
        }
        cout << k << "\n";
    }

    return 0;
}