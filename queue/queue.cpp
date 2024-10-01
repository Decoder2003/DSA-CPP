#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);

    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    return 0;
}