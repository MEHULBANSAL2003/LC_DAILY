#include <bits/stdc++.h>
using namespace std;

int islandPerimeter(vector<vector<int>> &grid)
{
    int ans = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    int up, down, right, left;

    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            if (grid[r][c] == 1)
            {
                if (r == 0)
                    up = 1;
                else
                    up = grid[r - 1][c] == 0;

                if (c == 0)
                    left = 1;
                else
                    left = grid[r][c - 1] == 0;

                if (r == rows - 1)
                    down = 1;
                else
                    down = grid[r + 1][c] == 0;

                if (c == cols - 1)
                    right = 1;
                else
                    right = grid[r][c + 1] == 0;

                ans += up + down + left + right;
            }
        }
    }
    return ans;
}

int main()
{
    int row, col;
    cin >> row >> col;

    vector<vector<int>> v(row, vector<int>(col));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> v[i][j];
        }
    }

    int ans = islandPerimeter(v);

    cout << ans << endl;
}