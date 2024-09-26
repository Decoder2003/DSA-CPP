#include <vector>
#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxSum = INT_MIN;
        int currentSum = 0;

        int start = 0, end = 0, tempStart = 0; // To track the subarray indices

        for (int i = 0; i < n; i++)
        {
            currentSum += nums[i];

            // Update the maxSum and subarray indices
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                start = tempStart;
                end = i;
            }

            // If currentSum becomes negative, reset it and update the potential start of the next subarray
            if (currentSum < 0)
            {
                currentSum = 0;
                tempStart = i + 1;
            }
        }

        // Print the maximum subarray
        cout << "Maximum Subarray: ";
        for (int i = start; i <= end; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;

        return maxSum;
    }
};

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution sol;
    int result = sol.maxSubArray(nums);
    cout << "Maximum Sum: " << result << endl;
    return 0;
}
