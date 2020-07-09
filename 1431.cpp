#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given the array candies and the integer extraCandies, where candies[i] represents the number of candies that the ith kid has.
 * For each kid check if there is a way to distribute extraCandies among the kids such that he or she can have the greatest number of candies among them. 
 * Notice that multiple kids can have the greatest number of candies.
 * Input: candies = [2,3,5,1,3], extraCandies = 3
 * Output: [true,true,true,false,true] 
 **/

// Solution Class here
class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int max = *max_element(candies.begin(), candies.end());
        vector<bool> arr;
        for (auto it = candies.begin(); it != candies.end(); ++it)
        {
            if (*it + extraCandies >= max)
                arr.push_back(true);
            else
                arr.push_back(false);
        }
        return arr;
    }
};

// Driver Code here
int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    vector<bool> arr = Solution().kidsWithCandies(candies, 3);
    for (auto it = arr.begin(); it != arr.end(); ++it)
        cout << *it << " ";
    return 0;
}