/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
 

Example 1:

Input: s = "abcde", goal = "cdeab"
Output: true
Example 2:

Input: s = "abcde", goal = "abced"
Output: false
*/


Approach 1:

class Solution {
public:
    bool rotateString(string s, string goal) {
        // If the lengths are different, return false
        if (s.size() != goal.size()) {
            return false;
        }

        string concatenated = goal + goal;
        int i = 0;
        int j = 0;
        int n = s.size();
        int m = concatenated.size();

        while (i < m) {
            if (concatenated[i] == s[j]) {
                j++;
                i++;
                if (j == n) {
                    return true;
                }
            } else {
                if (j != 0) {
                    i=i-j+1;
                    j = 0;
                } else {
                    i++;
                }
            }
        }

        return false;
    }
};


T.C. = O(n), where n is the length of the concatenated string.
S.C. = O(n), where n is the length of the concatenated string.



Approach 2:
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string concatenated = goal + goal;

        return concatenated.find(s) != string::npos;
    }
};
