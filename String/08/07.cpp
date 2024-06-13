/*
3110. Score of a String
You are given a string s. The score of a string is defined as the sum of the absolute difference between the ASCII values of adjacent characters.

Return the score of s.
Example 1:

Input: s = "hello"

Output: 13

Explanation : The ASCII values of the characters in s are: 'h' = 104, 'e' = 101, 'l' = 108, 'o' = 111. So, the score of s would be
|104 - 101| + |101 - 108| + |108 - 108| + |108 - 111| = 3 + 7 + 0 + 3 = 13.

*/



class Solution {
public:
    int scoreOfString(string s) {
        stringstream ss(s);
        char currentChar, previousChar;
        int result ;
        ss >> previousChar;
        while (ss >> currentChar) {
            result += abs(previousChar-currentChar);
            previousChar = currentChar;
        }
        return result;
    }
};





class Solution {
public:
    int scoreOfString(string s) {
        int result=0;
        for(int i=1;i<s.length();i++){
            result+=abs(s[i-1]-s[i]);
        }
        return result;
    }
};
