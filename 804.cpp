#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Problem Desciption here

/**
 * International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...", "c" maps to "-.-.", and so on.
 * For convenience, the full table for the 26 letters of the English alphabet is given below:
 * [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
 * Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. 
 * For example, "cab" can be written as "-.-..--...", (which is the concatenation "-.-." + ".-" + "-..."). We'll call such a concatenation, the transformation of a word.
 * Return the number of different transformations among all words we have.
 * Input: words = ["gin", "zen", "gig", "msg"]
 * Output: 2
 **/

// Solution Class here
class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        vector<string> letters = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        vector<string> concatWords;

        for (int i = 0; i < words.size(); ++i)
        {
            string word = words[i];
            string temp = "";
            for (int j = 0; j < word.size(); ++j)
            {
                int x = word[j];
                x -= 97;
                temp += letters[x];
            }
            concatWords.push_back(temp);
        }

        set<string> concatWordSet(concatWords.begin(), concatWords.end());
        return concatWordSet.size();
    }
};

// Driver Code here
int main()
{
    vector<string> words = {"gin", "zen", "gig", "msg"};
    cout << Solution().uniqueMorseRepresentations(words);
    return 0;
}