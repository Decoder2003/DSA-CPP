#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, vector<string>>
            mp; // To store sorted strings as keys and their anagrams as values
        for (auto str : strs)
        {
            string sortedStr = str;                   // Create a copy of str to sort
            sort(sortedStr.begin(), sortedStr.end()); // Sort the copy
            mp[sortedStr].push_back(str);             // Group the anagrams
        }

        vector<vector<string>> result;
        for (auto e : mp)
        {                               // Iterate through the map
            result.push_back(e.second); // Add each group of anagrams to the result
        }

        return result;
    }
};

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution solution;
    vector<vector<string>> result = solution.groupAnagrams(strs);
    for (auto e : result)
    {
        for (auto i : e)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}