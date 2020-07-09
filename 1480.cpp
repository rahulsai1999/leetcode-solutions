#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Description here

/**
 * Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
 * Return the running sum of nums.
 * Input: nums = [3,1,2,10,1]
 * Output: [3,4,6,16,17]
**/

// Solution Class for the problem
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int sum = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            sum += *it;
            int idx = distance(nums.begin(), it);
            nums[idx] = sum;
        }
        return nums;
    }
};

// Driver Code for the problem
int main()
{
    vector<int> nums = {3, 1, 2, 10, 1};
    nums = Solution().runningSum(nums);
    for (auto it = nums.begin(); it != nums.end(); ++it)
        cout << *it << " ";
    return 0;
}