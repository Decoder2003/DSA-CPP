#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // ()((()))() : ()() : ((()()))
    // ( : (()))

    stack<char> S;
    string str = "([)]";

    for (int i = 0; i < str.length(); i++)
    {
        if (S.empty() || str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            S.push(str[i]);
        }
        else
        {
            if (S.top() == '(' && str[i] == ')')
            {
                S.pop();
            }
            else if (S.top() == '[' && str[i] == ']')
            {
                S.pop();
            }
            else if (S.top() == '{' && str[i] == '}')
            {
                S.pop();
            }
            else
            {
                cout << "No!" << endl;
                return 0;
            }
        }
    }
    if (S.empty())
        cout << "It is balanced!" << endl;

    return 0;
}