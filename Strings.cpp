#include <iostream>
#include <string>
using namespace std;

int getLength(char a[])
{
    int count = 0;
    for (auto i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void getReverse(char a[])
{
    int e = getLength(a) - 1;
    int s = 0;
    while (s <= e)
    {
        swap(a[s++], a[e--]);
    }
}

char lowercase(char ch){
    if(ch>='a'&&ch<='z')
        return ch;
    else{
        return (ch-'A'+'a');
    }
}

bool ispalindrome(char a[])
{
    int e = getLength(a) - 1;
    int s = 0;
    while (s <= e)
    {
        if (lowercase(a[s++]) != lowercase(a[e--]))
         return 0;
    }
    return 1;
}

int main()
{
    char a[10];
    string ss;
    
    // // a[2]='\0';
    // cout << "Enter Name in Char array: " << endl;
    // cin>>a;
    // cout << a << endl;
    // cout << "LENGTH: " << getLength(a) << endl;
    // getReverse(a);
    // cout << "After Reverse: " << a << endl;
    // cout << "Is Palindrome : " << ispalindrome(a) << endl;
    // cout << "Lower case of G is : " << lowercase('G') << endl;

    cout << "Enter Name in String and use '.' as delimiter: " << endl;
    //'.' is delimiter
    getline(cin,ss,'.');
    cout<<ss<<endl;
    cout << "LENGTH: " << ss.length() << endl;
    string cp;
    cp=ss;
    cout<<ss.compare(cp)<<endl;

    return 0;
}