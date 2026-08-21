#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string target = "hello";
    int index = 0;

    // Loop through each character of the input string
    for (int i = 0; i < s.length(); i++)
    {
        // If current character matches the character we are looking for in "hello"
        if (s[i] == target[index])
        {
            index++; // Move to the next letter of "hello"
        }

        // Stop early if we already found all 5 letters ('h', 'e', 'l', 'l', 'o')
        if (index == 5)
        {
            break;
        }
    }

    // If index reached 5, "hello" exists as a subsequence
    if (index == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}