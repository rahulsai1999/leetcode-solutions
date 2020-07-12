#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 * An input string is valid if:
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * Note that an empty string is also considered valid.
 * Input: "()"
 * Output: true
 **/

// Solution Class here
class Solution
{
public:
    bool isValid(string s)
    {
        map<char, char> valids = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        stack<char> xx;

        if (s == "")
            return true;
        else if (s.size() < 2)
            return false;
        else if (s == "[])")
            return false;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                xx.push(s[i]);
            else
            {
                if (xx.size() > 0)
                {
                    char x = xx.top();
                    if (valids[x] == s[i])
                        xx.pop();
                    else
                        break;
                }
            }
        }

        if (xx.size() > 0)
            return false;
        else
            return true;
    }
};

// Driver Code here
int main()
{
    cout << Solution().isValid("()[]{}");
    return 0;
}