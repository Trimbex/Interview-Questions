#include <string>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) { 
        if (str1 + str2 != str2 + str1) {
            return ""; 
        }
        
        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength); 
    }
    
private:
    // int gcd(int a, int b) {
    //     while (b != 0) {
    //         int temp = b;
    //         b = a % b;
    //         a = temp;
    //     }
    //     return a;
    // }

   // or

   int gcd(int a, int b)
   {
    if (b == 0)
    {
        return a;
    }

     return gcd(b, a % b);
   }


};


/*
For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.
*/

