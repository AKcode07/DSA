#include <iostream>
using namespace std;

int main()
{
    int a = 123;
    cout << a << endl;
    char b = 'a';
    cout << b << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;
    // The range of ASCII values for uppercase letters A-Z is 65-90, and the range for lowercase letters a-z is 97-122.
    int c = 'A';
    cout << c << endl;
    char d = 98;
    cout << d << endl;
    char ch = 123456;
    cout << ch << endl;
    unsigned int f = -112;
    cout << f << endl;
    int g = 21;
    cout << !g << endl;
    return 0;
}