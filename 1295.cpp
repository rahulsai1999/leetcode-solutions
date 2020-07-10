#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given an array nums of integers, return how many of them contain an even number of digits.
 * Input: nums = [12,345,2,6,7896]
 * Output: 2
 **/

// Solution Class here
class Solution
{
public:
    int countDigits(int n)
    {
        int count = 0;
        while (n != 0)
        {
            int r = n % 10;
            n = n / 10;
            count++;
        }
        return count;
    }

    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        for (auto it = nums.begin(); it != nums.end(); ++it)
        {
            if (countDigits(*it) % 2 == 0)
                count++;
        }
        return count;
    }
};

// Driver Code here
int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << Solution().findNumbers(nums);
    return 0;
}