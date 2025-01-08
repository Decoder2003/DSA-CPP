#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> S;
    string myStr = "naman";

    for (int i = 0; i < myStr.length(); i++)
    {
        S.push(myStr[i]);
    }
    string resStr;
    int n = S.size();
    for (int i = 0; i < n; i++)
    {
        resStr += S.top();
        S.pop();
    }

    cout << resStr << endl;
    return 0;
}