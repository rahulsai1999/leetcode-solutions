#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given a non-negative integer num, return the number of steps to reduce it to zero.
 * If the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.
 * Input: num = 14
 * Output: 6
 **/

// Solution Class here
class Solution
{
public:
    bool isEven(int n)
    {
        if (n % 2 == 0)
            return true;
        else
            return false;
    }

    int numberOfSteps(int num)
    {
        int steps = 0;
        while (num != 0)
        {
            if (isEven(num))
                num /= 2;
            else
                num--;
            steps++;
        }
        return steps;
    }
};

// Driver Code here
int main()
{
    cout << Solution().numberOfSteps(14);
    return 0;
}