#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the first number" << endl;

    cin >> a;
    cout << "enter the second number" << endl;

    cin >> b;
    if (a > b)
    {
        cout << "first number " << a << " is the largest";
    }
    else
    {
        cout << "second number  " << b << " is the largest";
    }
    return 0;
}