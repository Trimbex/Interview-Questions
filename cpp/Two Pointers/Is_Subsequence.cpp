class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
      int subIdx = 0;
      int count = 0;
      if(!s.size()) return true;
      for(int i = 0 ; i < t.size() ; i++)
      {
        if(s[subIdx] == t[i])
        {
            count++;
            subIdx++;
        }
        
        if(count == s.size())
        return true;
      }

      return false;
    }
};
/*
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.

 */
