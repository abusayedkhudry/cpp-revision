// #include <bits/stdc++.h>
// using namespace std;
// void fun(int N, long long &bi1, long long &bi2)
// {
//     if (N == 0)
//     {
//         return;
//     }
//     int bi = N % 2;
//     bi1 = bi1 * 10 + bi;
//     fun(N / 2, bi1, bi2);
//     bi2 = bi2 * 10 + bi;
// }
// int main()
// {
//     int N;
//     cin >> N;
//     long long bi1 = 0;
//     long long bi2 = 0;
//     fun(N, bi1, bi2);
//     if (bi1 == bi2)
//     {
//         cout << "YES\n";
//     }
//     else
//     {
//         cout << "NO\n";
//     }
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

// Function 1: Checks if the number is odd
bool isOdd(int N)
{
    return N % 2 != 0;
}

// Helper function to build the binary string recursively
void getBinary(int N, string &binary)
{
    if (N == 0)
    {
        return;
    }
    // Append the bit
    binary += (N % 2 == 0 ? '0' : '1');
    getBinary(N / 2, binary);
}

// Function 2: Checks if the binary representation is a palindrome
bool isPalindrome(int N)
{
    string binary = "";
    getBinary(N, binary);

    int left = 0;
    int right = binary.length() - 1;

    while (left < right)
    {
        if (binary[left] != binary[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    if (isOdd(N) && isPalindrome(N))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}