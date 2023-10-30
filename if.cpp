#include <iostream>
using namespace std;
int main()
{
    // int a, b;
    // cout << "Enter your first number : - ";
    // cin >> a;
    // cout << "Enter your second number : - ";
    // cin >> b;

    // if (a > b)
    // {
    //     cout << a << " is greater";
    // }
    // else
    // {
    //     cout << b << " is greater";
    // }

    // Prime
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime" << i << endl;
        }
        else
        {
            cout << "Prime" << i << endl;
        }
        i++;
    }
    return 0;
}
