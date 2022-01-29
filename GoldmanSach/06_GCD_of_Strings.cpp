//Question Link - https://leetcode.com/problems/greatest-common-divisor-of-strings/

//Question- For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times). Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

//Solution -

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
            
        return (str1 + str2== str2 + str1)  ? str1.substr(0, gcd(str1.length(), str2.length())): "";
        
    }
};