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


//   T.C. : O(n∗m)   S.C. : O(1)


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

// T.C. : O((n-m)∗m) S.C. : O(1)


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

// T.C. : O((n-m)∗m) S.C. : O(1)

