#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * Given a string s formed by digits ('0' - '9') and '#' . 
 * We want to map s to English lowercase characters as follows:
 * Characters ('a' to 'i') are represented by ('1' to '9') respectively.
 * Characters ('j' to 'z') are represented by ('10#' to '26#') respectively. 
 * Return the string formed after mapping.
 * Input: s = "10#11#12"
 * Output: "jkab"
 **/

// Solution Class here
class Solution
{
public:
    string freqAlphabets(string s)
    {
        string res = "";
        vector<char> resv;

        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '#')
            {
                string temp = "";
                temp += s[i - 2];
                temp += s[i - 1];
                int tx = stoi(temp);
                tx += 96;
                char x = tx;
                resv.pop_back();
                resv.pop_back();
                resv.push_back(x);
            }
            else
            {
                string temp = "";
                temp += s[i];
                int tx = stoi(temp);
                tx += 96;
                char x = tx;
                resv.push_back(x);
            }
        }

        for (auto it = resv.begin(); it != resv.end(); ++it)
            res += *it;

        return res;
    }
};

// Driver Code here
int main()
{
    cout << Solution().freqAlphabets("10#11#12");
    return 0;
}