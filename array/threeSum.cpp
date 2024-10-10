#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void threeSum(vector<int> &nums, int sum)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;
        while (l < r)
        {
            int curSum = nums[i] + nums[l] + nums[r];
            if (curSum == sum)
            {
                cout << nums[i] << " + " << nums[l] << " + " << nums[r] << " = " << sum << endl;
                return;
            }
            else if (curSum > sum)
                r--;
            else
                l++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 11};
    int sum = 22;
    threeSum(arr, sum);
    return 0;
}
