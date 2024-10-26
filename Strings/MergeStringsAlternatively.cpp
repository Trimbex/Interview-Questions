class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n = word1.size() + word2.size();
        int i = 0;
        int y1 = 0;
        int y2 = 0;
        std::string output;
        output.resize(n);

        
        while(i < n)
        {
            if(i < n && y1 < word1.size())
            {
                output[i++] = word1[y1++];
            }

            if(i < n && y2 < word2.size())
            {
                output[i++] = word2[y2++];
            }

        }

        return output;
        
    }
};


/*
Leetcode 1768
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

*/
