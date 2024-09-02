#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<int, long long int> dp;
int climbStairs(int n, int count = 0)
{
    // base case
    if (dp[count])
        return dp[count];
    if (count == n)
        return 1;
    if (count > n)
        return 0;

    // recursive case
    dp[count] = climbStairs(n, count + 1) + climbStairs(n, count + 2);
    return dp[count];
}

int main()
{
    cout << climbStairs(44) << endl;
    return 0;
}