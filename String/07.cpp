/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Input: s = "A man, a plan, a canal: Panama"
Output: true

leetcode link  : https://leetcode.com/problems/valid-palindrome/description/
*/



class Solution {
public:
    // Function to check if a character is alphanumeric
    bool isValidChar(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    // Function to convert a string to lowercase
    void toLowerCase(string &s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
    }

    // Function to check if a string is a palindrome
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (isValidChar(s[i])) {
                temp.push_back(s[i]);
            }
        }
        toLowerCase(temp);
        int i = 0, j = temp.length() - 1;

        while (i < j) {
            if (temp[i] != temp[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};













class Solution {
public:
 bool isValidChar(char ch){
  if((ch >='a' && ch<= 'z') ||(ch >= '0' && ch<= '9')) return true;
  return false;
}


void toLowerCase(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}


bool isPalindrome(string s) {
    toLowerCase(s);
    int i=0, j=s.length()-1;
    bool isPalindrome=true;
    while(i<j){
      if(isValidChar(s[i]) && isValidChar(s[j])){
        if(s[i]==s[j]){
         i++; j--;
         continue;
        } else {
         isPalindrome = false;
         break;
        }
      }
      if(!isValidChar(s[i])) i++;
      if(!isValidChar(s[j])) j--;
    }
   return isPalindrome;
}
};
