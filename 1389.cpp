#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given two arrays of integers nums and index. Your task is to create target array under the following rules:
 * Initially target array is empty.
 * From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
 * Repeat the previous step until there are no elements to read in nums and index.
 * Return the target array.
 * Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
 * Output: [0,4,1,3,2]
 **/

// Solution Class here
class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); ++i)
        {
            int temp = index[i];
            vector<int>::iterator it = arr.begin();
            advance(it, temp);
            arr.insert(it, nums[i]);
        }
        return arr;
    }
};

// Driver Code here
int main()
{
    vector<int> nums = {0, 1, 2, 3, 4};
    vector<int> idxs = {0, 1, 2, 2, 1};
    auto vec = Solution().createTargetArray(nums, idxs);
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    return 0;
}