#include <bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int n = matrix.size();    // no of rows
    int m = matrix[0].size(); // no of columns

    vector<int> result;

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    while (top <= bottom && left <= right)
    {
        int n = matrix.size();    // no of rows
        int m = matrix[0].size(); // no of columns

        vector<int> result;

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = m - 1;

        while (top <= bottom && left <= right)
        {
            // Right direction
            for (int i = left; i <= right; i++)
            {
                result.push_back(matrix[top][i]);
            }
            top++;

            // Bottom Direction
            for (int i = top; i <= bottom; i++)
            {
                result.push_back(matrix[i][right]);
            }
            right--;

            // Left direction
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // Top direction
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return result;
    }

    return result;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4},
                                  {5, 6, 7, 8},
                                  {9, 10, 11, 12},
                                  {13, 14, 15, 16}};

    vector<int> result = spiralOrder(matrix);
    for (auto e : result)
    {
        cout << e << " ";
    }
    cout << endl;

    return 0;
}