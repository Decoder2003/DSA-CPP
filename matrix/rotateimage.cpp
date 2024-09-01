#include <bits/stdc++.h>
using namespace std;

// Brute Force Solution
void rotateBF(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> answer(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            answer[j][n - i - 1] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateBF(matrix);
    return 0;
}