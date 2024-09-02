#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int, int> dp; // memorization
int factorial(int num)
{
    // base case
    if (dp[num])
    {
        // cout << "I know fact of : " << num << endl;
        return dp[num]; // storing the ans for future need
    }
    if (num == 1)
        return 1;
    // recursive case
    dp[num] = num * factorial(num - 1);
    return dp[num];
}

int main()
{
    vector<int> arr = {1, 2, 8, 3, 1, 9};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << factorial(arr[i]) << endl;
    }
    return 0;
}