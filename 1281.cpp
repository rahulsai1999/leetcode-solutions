#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 * Input: n = 4421
 * Output: 21
 **/

// Solution Class here
class Solution
{
public:
    vector<int> getDigits(int n)
    {
        vector<int> res;
        while (n != 0)
        {
            int temp = n % 10;
            res.push_back(temp);
            n = n / 10;
        }
        return res;
    }

    static int prod(int x, int y) { return x * y; }

    int subtractProductAndSum(int n)
    {
        vector<int> res = getDigits(n);
        int sum = accumulate(res.begin(), res.end(), 0);
        int pdt = accumulate(res.begin(), res.end(), 1, prod);
        return pdt - sum;
    }
};

// Driver Code here
int main()
{
    cout << Solution().subtractProductAndSum(4421);
    return 0;
}