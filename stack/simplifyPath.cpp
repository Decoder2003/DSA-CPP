#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    string simplifyPath(string path)
    {
        string resultPath = "";
        vector<string> pathArray;
        int n = path.length();
        string temp = "";
        for (int i = 0; i < n; i++)
        {
            if (path[i] == '/' && temp.empty())
                continue;
            else if (path[i] == '/' && !temp.empty())
            {
                pathArray.push_back(temp);
                temp = "";
            }
            else
                temp += path[i];
        }
        pathArray.push_back(temp);

        stack<string> S;
        for (int i = 0; i < pathArray.size(); i++)
        {
            if (pathArray[i] == "..")
            {
                if (!S.empty())
                    S.pop();
            }
            else if (pathArray[i] == ".")
                continue;
            else
                S.push(pathArray[i]);
        }

        while (!S.empty())
        {
            resultPath = "/" + S.top() + resultPath;
            S.pop();
        }
        return resultPath.substr(0, resultPath.length() - 1);
    }
};

int main()
{
    string path = "/desktop/home/../../../development/";

    Solution solution;
    cout << solution.simplifyPath(path) << endl;
    return 0;
}