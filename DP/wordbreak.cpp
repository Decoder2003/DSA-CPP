#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

bool wordBreak(string s, vector<string> &wordDict)
{
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    vector<bool> dp(s.length() + 1, false);

    dp[0] = true; // base case: empty string can be segmented

    for (int i = 1; i <= s.length(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end())
            {
                dp[i] = true;
                break;
            }
        }
    }

    return dp[s.length()];
}

int main()
{
    string s1 = "leetcode";
    vector<string> wordDict1 = {"leet", "code"};
    cout << (wordBreak(s1, wordDict1) ? "true" : "false") << endl; // Output: true

    string s2 = "applepenapple";
    vector<string> wordDict2 = {"apple", "pen"};
    cout << (wordBreak(s2, wordDict2) ? "true" : "false") << endl; // Output: true

    string s3 = "catsandog";
    vector<string> wordDict3 = {"cats", "dog", "sand", "and", "cat"};
    cout << (wordBreak(s3, wordDict3) ? "true" : "false") << endl; // Output: false

    return 0;
}
