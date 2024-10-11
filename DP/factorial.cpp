#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, int> memory;

int factorial(int n)
{
    if (memory[n])
    {
        cout << "Factorial of " << n << " exist." << endl;
        return memory[n];
    }
    if (n == 1)
        return 1;

    int ans = n * factorial(n - 1);
    memory[n] = ans;
    cout << "Factorial of " << n << "-> " << memory[n] << " saved." << endl;
    return ans;
}

int main()
{

    vector<int> arr = {1, 5, 2, 3, 6};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " : " << factorial(arr[i]) << endl;
    }
    return 0;
}