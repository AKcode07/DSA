// Calculator
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Amount:";
    cin >> a;
    int rs100, rs50, rs20, rs10;
    switch (1)
    {
    case 1:
        rs100 = a / 100;
        a = a % 100;
        cout << "100rs = " << rs100 << endl;
    case 2:
        rs50 = a / 50;
        a = a % 50;
        cout << "50rs = " << rs50 << endl;
    case 3:
        rs20 = a / 20;
        a = a % 20;
        cout << "20rs = " << rs20 << endl;
    case 4:
        rs10 = a / 10;
        a = a % 10;
        cout << "10rs = " << rs10 << endl;
        break;

    default:
        cout << "Enter Amount in Digits." << endl;
    }
    return 0;
}