#include <iostream>
using namespace std;

void reverseString(string &s, int i)
{

    int j = s.size() - 1 - i;
    if (i > j)
        return;

    swap(s[i], s[j]);

    reverseString(s, i + 1);
}

bool palindrome(string &s, int i)
{
    int j = s.size() - 1 - i;
    if (i > j)
        return true;

    if(s[i]==s[j]){
        return palindrome(s, i + 1);
    }
    return false;
}


int main()
{ 

    string s = "AKA";
    // reverseString(s,0);
    cout << s << endl;

    if(palindrome(s,0))
    {
        cout << "Palindrome :)" << endl;
    }
    else
        cout << "Not Palindrome :(" << endl;

    return 0;
}