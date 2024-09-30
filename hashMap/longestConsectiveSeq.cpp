#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int longestConsecutiveBF(vector<int> &nums)
    {
        int n = nums.size();
        int mx = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            temp.push_back(nums[i]);
            for (int j = 0; j < n; j++)
            {
                if (temp[temp.size() - 1] + 1 == nums[j])
                {
                    temp.push_back(nums[j]);
                }
            }
            int n = temp.size();
            mx = max(mx, n);
        }
        return mx;
    }
};

int main()
{
    vector<int> nums = {1, 0, -1, 2, 3, 4, -2, -4, 6, 7};
    Solution solution;
    cout << solution.longestConsecutiveBF(nums) << endl;
    return 0;
}