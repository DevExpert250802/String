/*
    Company Tags                : Google, Amazon, Microsoft, Meta
    Leetcode Link               : https://leetcode.com/problems/determine-if-string-halves-are-alike/
*/

/******************************************************** C++ ********************************************************/
//Approach-1 (without Using Set)
//T.C : O(n)
//S.C : O(1)


class Solution {
public:
    bool isVowel(char ch){
        return (ch == 'a' || ch == 'e' || ch  =='i' || ch == 'o' ||ch=='u' ||ch == 'A' || ch == 'E' || ch  =='I' || ch == 'O' ||ch =='U');
    }
    bool halvesAreAlike(string s) {
        int n = s.length(), count=0;
        for(int i=0;i<n/2;i++) if( isVowel(s[i])) count++;
        for(int i=n/2;i<n;i++) if( isVowel(s[i])) count--;
        return count == 0;
    }
};
