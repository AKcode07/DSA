#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("a"); // a is pushed to the top of the stack
    s.push("b");
    s.push("c");
    cout << "Top element : " << s.top() << endl;
    s.pop();
    cout << "Top element : " << s.top() << endl;
    cout << "size : " << s.size() << endl;
    return 0;
}