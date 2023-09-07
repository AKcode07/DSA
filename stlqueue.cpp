#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> a;
    a.push(0);
    a.push(1);
    a.push(2);
    cout << "size : " << a.size() << endl;
    cout << "At top : " << a.front() << endl;
    a.pop();
    cout << "size after pop : " << a.size() << endl;
    cout << "At top : " << a.front() << endl;
    return 0;
}