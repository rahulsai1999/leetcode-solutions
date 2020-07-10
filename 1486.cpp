#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given an integer n and an integer start.
 * Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
 * Return the bitwise XOR of all elements of nums.
 * Input: n = 5, start = 0
 * Output: 8
 * Explanation: Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
 * Where "^" corresponds to bitwise XOR operator.
 **/

// Solution Class here
class Solution
{
public:
    int xorOperation(int n, int start)
    {
        vector<int> arr;
        for (int i = 0; i < n; ++i)
            arr.push_back(start + (2 * i));

        int result = 0;
        for (auto it = arr.begin(); it != arr.end(); ++it)
            result = result ^ *it;
        return result;
    }
};

// Driver Code here
int main()
{
    cout << Solution().xorOperation(5, 0);
    return 0;
}