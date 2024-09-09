#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++)
        {
            if (map.count(nums[i]))
            {
                if (abs(map[nums[i]] - i) <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;

    Solution solution;
    cout << solution.containsNearbyDuplicate(nums, k) << endl;
    return 0;
}