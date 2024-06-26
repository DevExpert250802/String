
/*
    Company Tags                : Google, Apple, LinkedIn, Microsoft
    Leetcode Link               : https://leetcode.com/problems/make-the-string-great/
*/


/********************************************************************** C++ ********************************************************/
//T.C : O(n)
//S.C : O(1) -> Ignoring the space taken for result string


class Solution {
public:
    string makeGood(string s) {
        string result="";
        for(int i=0;i<s.length();i++){
            if(!result.empty() && (s[i]==result.back()-32 || s[i]==result.back()+32 )){
                result.pop_back();
            }
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};
