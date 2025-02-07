#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n, 0);
        vector<int> col(m, 0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (row[i] || col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


int main(){
    vector<vector<int>> vec{{1, 1, 1},
                            {1, 0, 1},
                            {1, 1, 1}};
    Solution sol;
    sol.setZeroes(vec);
    for (auto i : vec)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    
    }

    return 0;
}