#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void splitIntoSubsets(vector<int> &arr)
{
    int n = arr.size();

    // There are 2^n possible ways to assign each element to one of two subsets
    int totalSplits = pow(2, n); // Total possible ways to split

    // Loop through all possible subsets combinations
    for (int i = 1; i < totalSplits - 1; ++i)
    { // Skip 0 (both empty) and totalSplits-1 (one set empty)
        vector<int> subset1, subset2;

        for (int j = 0; j < n; ++j)
        {
            // Check if the j-th bit in i is set or not
            if (i & (1 << j))
            {
                subset1.push_back(arr[j]);
            }
            else
            {
                subset2.push_back(arr[j]);
            }
        }

        // Print the two subsets
        cout << "{ ";
        for (int num : subset1)
        {
            cout << num << " ";
        }
        cout << "} , { ";
        for (int num : subset2)
        {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
}

void split2SubArrays(vector<int> nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        // left array;
        cout << "{ ";
        for (int j = 0; j < i; j++)
        {
            cout << nums[j] << " ";
        }
        cout << "} { ";
        // right array;
        for (int j = i; j < n; j++)
        {
            cout << nums[j] << " ";
        }
        cout << "}" << endl;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    cout << "\n--- split2SubArrays ---" << endl;
    split2SubArrays(nums);

    cout << "\n--- splitIntoSubsets ---" << endl;
    splitIntoSubsets(nums);
    return 0;
}