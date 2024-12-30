#include <iostream>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
    }

    void subString(string s)
    {
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                cout << s[j];
            }
        }
    }
};

int main()
{
    return 0;
}