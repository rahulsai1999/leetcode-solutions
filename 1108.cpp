#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given a valid (IPv4) IP address, return a defanged version of that IP address.
 * A defanged IP address replaces every period "." with "[.]".
 * Input: address = "1.1.1.1"
 * Output: "1[.]1[.]1[.]1"
 **/

// Solution Class here
class Solution
{
public:
    vector<string> splitStr(string a)
    {
        vector<string> arr;
        string temp = "";
        for (int i = 0; i < a.size(); ++i)
        {
            if (a[i] != '.')
                temp += a[i];
            else
            {
                arr.push_back(temp);
                temp = "";
            }
        }
        arr.push_back(temp);
        return arr;
    }
    string defangIPaddr(string address)
    {
        vector<string> afterSplit = splitStr(address);
        string finalStr = "";
        for (auto it = afterSplit.begin(); it != afterSplit.end(); ++it)
        {
            int idx = distance(afterSplit.begin(), it);

            if (idx != afterSplit.size() - 1)
                finalStr += *it + "[.]";
            else
                finalStr += *it;
        }
        return finalStr;
    }
};

// Driver Code here
int main()
{
    string address = "255.100.50.0";
    cout << Solution().defangIPaddr(address);
    return 0;
}