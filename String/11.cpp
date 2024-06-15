/*
Split the binary string into substrings with equal number of 0s and 1s

Given binary string str of length N. The task is to find the maximum count of consecutive substrings str can be divided
into such that all the substrings are balanced i.e. they have an equal number of 0s and 1s.If it is not possible to split
str satisfying the conditions then return -1.

Example 1:
Input:
S = "0100110101"
Output: 4
Explanation: 
The required substrings are 01, 0011, 01 and 01.


Example 2:
Input:
S = "0111100010"
Output: 3
*/


    int maxSubStr(string str){
       int x=0,y=0,cnt=0;
       for(int i=0;i<str.size();i++){
         if(str[i]=='0') x++;
         else y++;
          if(x==y) cnt++;
       }
       if(x!=y) return -1;
       return cnt;
    }
