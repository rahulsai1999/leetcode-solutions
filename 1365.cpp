#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
 * That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].
 * Return the answer in an array.
 * Input: nums = [8,1,2,2,3]
 * Output: [4,0,1,1,3]
 **/

// Solution Class here

// O(n) solution
// Sort a copy of the vector.
// Find the distance of the first occurence from the beginning in the sorted vector.
class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> arr;
        vector<int> copy_nums = nums;
        sort(copy_nums.begin(), copy_nums.end());
        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            auto new_it = find(copy_nums.begin(), copy_nums.end(), *it);
            int dist = distance(copy_nums.begin(), new_it);
            arr.push_back(dist);
        }
        return arr;
    }
};

// O(n^2) solution
class Solution2
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        vector<int> arr;
        for (int i = 0; i < nums.size(); ++i)
        {
            int count = 0;
            for (int j = 0; j < nums.size(); ++j)
            {
                if (j != i && nums[j] < nums[i])
                    count++;
            }
            arr.push_back(count);
        }
        return arr;
    }
};
// Driver Code here
int main()
{
    return 0;
}