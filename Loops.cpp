#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a:";
    cin >> a;
    // a=cin.get(); // Get as Character
    if (a < 0)
        cout << "Negative" << endl;
    else if (a > 0)
        cout << "Positive" << endl;
    else
        cout << "Zero" << endl;

    return 0;
}