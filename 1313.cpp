#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * We are given a list nums of integers representing a list compressed with run-length encoding.
 * Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  
 * For each such pair, there are freq elements with value val concatenated in a sublist. 
 * Concatenate all the sublists from left to right to generate the decompressed list.
 * Return the decompressed list.
 * Input: nums = [1,2,3,4]
 * Output: [2,4,4,4]
 **/

// Solution Class here

// O(n) solution
// Count the number of elements by skipping 2 and summing the run-length
// Allocate the result vector with that count.
// Fill the vector using the fill_n function

class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        int count = 0;
        for (int i = 0; i < nums.size(); i += 2)
            count += nums[i];

        vector<int> arr(count);
        auto it = arr.begin();

        for (int i = 0; i < nums.size(); i += 2)
            it = fill_n(it, nums[i], nums[i + 1]);

        return arr;
    }
};

// O(n^2) solution
class Solution2
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); i += 2)
        {
            for (int j = 0; j < nums[i]; ++j)
            {
                arr.push_back(nums[i + 1]);
            }
        }
        return arr;
    }
};

// Driver Code here
int main()
{
    vector<int> nums = {1, 2, 3, 4};
    auto vec = Solution().decompressRLElist(nums);
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";

    return 0;
}