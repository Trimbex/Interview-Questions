class Solution {
public:
    bool closeStrings(string word1, string word2) {


        unordered_map<char,int> word1Freq, word2Freq;
        vector<int> word1LetterCount , word2LetterCount;
        unordered_set<char> word1Chars, word2Chars;

        for(auto ch : word1)
        {
            word1Freq[ch]++;
             word1Chars.insert(ch);
        }

        for(auto ch : word2)
        {
            word2Freq[ch]++;
             word2Chars.insert(ch);
        }

        if(word2Chars != word1Chars)
        {
                return false;
        }

        //copy to vectors

        for(auto entry : word1Freq)
        {
            word1LetterCount.push_back(entry.second);
        }

        for(auto entry : word2Freq)
        {
            word2LetterCount.push_back(entry.second);
        }



        std::sort(word1LetterCount.begin(),word1LetterCount.end());
        std::sort(word2LetterCount.begin(),word2LetterCount.end());

        for(int i = 0 ; i < word1LetterCount.size() ; i++)
        {
            if(word1LetterCount[i] != word2LetterCount[i]) return false;
        }

        return true;
    }
};


/*

Two strings are considered close if you can attain one from the other using the following operations:

Operation 1: Swap any two existing characters.
For example, abcde -> aecdb
Operation 2: Transform every occurrence of one existing character into another existing character, and do the same with the other character.
For example, aacabb -> bbcbaa (all a's turn into b's, and all b's turn into a's)
You can use the operations on either string as many times as necessary.

Given two strings, word1 and word2, return true if word1 and word2 are close, and false otherwise.

 

Example 1:

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
Example 2:

Input: word1 = "a", word2 = "aa"
Output: false
Explanation: It is impossible to attain word2 from word1, or vice versa, in any number of operations.
Example 3:

Input: word1 = "cabbba", word2 = "abbccc"
Output: true
Explanation: You can attain word2 from word1 in 3 operations.
Apply Operation 1: "cabbba" -> "caabbb"
Apply Operation 2: "caabbb" -> "baaccc"
Apply Operation 2: "baaccc" -> "abbccc"
 

Constraints:

1 <= word1.length, word2.length <= 10^5
word1 and word2 contain only lowercase English letters.
*/
