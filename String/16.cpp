/*
    Company Tags                : Goldman Sachs
    Leetcode Link               : https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
*/

/************************************************************** C++ **************************************************************/
//Approach-1 (Simple concatenation)
//T.C : O(n*k) - n and m = length of word1 and word2 respectively
//S.C : O(n+k)
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "",s2 = "";
        
        for(string s:word1)s1 += s;
        for(string s:word2)s2 += s; 
        return s1==s2;
    }
};


//Approach-2 (Using comparison character by character using index)
//T.C : O(n*k) - n and m = length of word1 and word2 respectively
//S.C : O(1)
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size(), m = word2.size();
        int w1i = 0, w2i = 0, i = 0,j=0;
        
        while(w1i < n && w2i < m) {

            if(word1[w1i][i] != word2[w2i][j]) return false;
            i++;  j++;

            if(i == word1[w1i].length()) {
                i = 0;   w1i++;
            }
            if(j == word2[w2i].length()) {
                j = 0;   w2i++;
            }
        }
        if(w1i == n&& w2i == m)return true;
        return false;
    }
};
