#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given a m * n matrix grid which is sorted in non-increasing order both row-wise and column-wise. 
 * Return the number of negative numbers in grid.
 * Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]
 * Output: 8
 **/

// Solution Class here
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (auto it = grid.begin(); it != grid.end(); ++it)
        {
            auto x = *it;
            count += count_if(x.begin(), x.end(), [](int i) { return (i < 0); });
        }
        return count;
    }
};

// Driver Code here
int main()
{
    vector<vector<int>> grid = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << Solution().countNegatives(grid);
    return 0;
}