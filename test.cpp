#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> getSubArrays(vector<int> nums)
{
    int n = nums.size();
    vector<vector<int>> subArrays;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            vector<int> subArray;
            for (int k = i; k <= j; k++)
            {
                subArray.push_back(nums[k]);
            }
            subArrays.push_back(subArray);
        }
    }
    return subArrays;
};

int main()
{
    vector<int> nums = {2, 4, 6, 8};
    vector<vector<int>> subArrays = getSubArrays(nums);

    vector<int> avgSubArrays;
    int n = subArrays.size();
    for (int i = 0; i < n; i++)
    {
        int avg = 0;
        for (int j = 0; j < subArrays[i].size(); j++)
        {
            avg += subArrays[i][j];
        }
        avg = avg / subArrays[i].size();
        avgSubArrays.push_back(avg);
    }

    n = avgSubArrays.size();
    for (int i = 0; i < n; i++)
    {
        cout << avgSubArrays[i] << endl;
    }
    return 0;
}