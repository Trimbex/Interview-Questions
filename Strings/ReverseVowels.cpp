class Solution {
public:
     bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
        }
    string reverseVowels(string s) {
        
      
    
        std::vector<char> vowelArray;

        //SCAN FOR VOWELS

        for(int i = 0; i < s.length() ; i++)
        {
            if(isVowel(s[i]))
            {   
                std::cout << "TEST";
                vowelArray.push_back(s[i]);
            }
        }

        std::reverse(vowelArray.begin(),vowelArray.end());

        //PLace vowels
        int vowelPointer = 0;
         for(int i = 0; i < s.length() ; i++)
         {
            if(isVowel(s[i]))
            {
                s[i] = vowelArray[vowelPointer++];
            }
         }

         
         return s;


        
    }
};


/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:

The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

 

Constraints:

1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/
