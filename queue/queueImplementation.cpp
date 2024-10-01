
#include <iostream>
using namespace std;

class Queue
{
public:
    int size = 5;
    int queue[5];
    int currSize = 0;
    int start = -1, end = -1;

    void push(int val)
    {
        if (currSize == size)
            cout << "Queue overflow!" << endl;
        else
        {
            if (currSize == 0)
            {
                start = 0;
                end = 0;
            }
            else
            {
                end = (end + 1) % size;
            }
            queue[end] = val;
            currSize++;
        }
    }
    void pop()
    {
        if (currSize == 0)
            cout << "Queue underflow!" << endl;
        else
        {
            start = (start + 1) % size;
            currSize--;
        }
    }
    bool empty()
    {
        if (currSize == 0)
            return true;
        return false;
    }
    int front()
    {
        if (currSize == 0)
            cout << "Queue underflow!" << endl;
        else
            return queue[start];
    }

    int back()
    {
        if (currSize == 0)
            cout << "Queue underflow!" << endl;
        else
            return queue[end];
    }
};

int main()
{
    Queue Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.pop();
    Q.push(60);
    Q.pop();
    Q.push(70);

    while (!Q.empty())
    {
        cout << Q.front() << " ";
        Q.pop();
    }
    cout << endl;

    Q.pop();
    return 0;
}