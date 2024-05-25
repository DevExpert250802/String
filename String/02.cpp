/*
    
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.


 Leetcode Link : https://leetcode.com/problems/reverse-string/

*/




class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int start = 0, end = n-1;
        while(start<end){
            swap(s[start],s[end]);
            start++,end--;
        }
    }
};
