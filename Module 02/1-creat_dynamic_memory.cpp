#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *p = new int;
    *p = 10;
    cout << "&p = " << &p << endl;// p er nijer adress
    cout << "p = " << p << endl;//p jei adress ke store korteche
    cout << "*p = " << *p << endl;// p jei adress ke store korche tar value
    return 0;
}