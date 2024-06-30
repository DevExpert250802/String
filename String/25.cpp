/*
    Company Tags                - Google, Amazon, Microsoft, Facebook, Qualcomm
    Leetcode Link               - https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
*/

//Approach1 :  Brute Force naive Approach

class Solution {
public:
    int strStr(string s1, string s2) {
        int n = s1.size(), m =s2.size();
        if(n<m) return -1;
        for(int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                if(s1[i+j] != s2[j]){
                    break;
                }
                if(j==m-1) return i;
            }
        }
        return -1;
    }
};


//   T.C. : O(n∗m)     S.C. : O(1)


//Approach 2 :  Updated naive Approach

class Solution {
public:
    int strStr(string s1, string s2) {
        int n = s1.size(), m =s2.size();
        if(n<m) return -1;
        for(int i=0; i<=n-m; i++){
            for(int j=0; j<m; j++){
                if(s1[i+j] != s2[j]){
                    break;
                }
                if(j==m-1) return i;
            }
        }
        return -1;
    }
};

// T.C. : O((n-m)∗m)         S.C. : O(1)


//Approach 3: Slicing approach

class Solution {
public:
    int strStr(string s1, string s2) {
        int n = s1.size(), m =s2.size();
        if(n<m) return -1;
        for(int i=0; i<n; i++){
            if(s1.substr(i,m) == s2)return i;
        }
        return -1;
    }
};

// T.C. : O((n-m)∗m)     S.C. : O(1)





//Approach 3: KMP approach

class Solution {
public:
    void fillLPS(string &str, vector<int>& lps) {
        int n = str.size();
        int len = 0, i = 1;
        lps[0] = 0; 
        
        while (i < n) {
            if (str[i] == str[len]) {
                len++;
                lps[i] = len;
                i++; 
            } else {
                if (len == 0) {
                    lps[i] = 0;
                    i++; 
                } else {
                    len = lps[len - 1];
                }
            }
        }
    }

    int KMP(string Text, string Pattern) {
        int n = Text.size(), m = Pattern.size();
        vector<int> lps(m);
        fillLPS(Pattern, lps);
        
        int i = 0, j = 0;
        while (i < n) {
            if (Text[i] == Pattern[j]) {
                i++;
                j++;
            }

            if (j == m) {
                return i - j; 
            } else if (i < n && Text[i] != Pattern[j]) {
                if (j == 0) {
                    i++;
                } else {
                    j = lps[j - 1];
                }
            }
        }
        return -1;  // Pattern not found
    }

    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0; 
        }
        return KMP(haystack, needle);
    }
};



// T.C. : O(n+m)     S.C. : O(m)
