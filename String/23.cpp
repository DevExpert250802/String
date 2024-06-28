/*
    Company Tags                : Meta
    Leetcode Link               : https://leetcode.com/problems/restore-ip-addresses/
*/


class Solution {
public:

   int n;
   vector<string>result;

   bool isValid(string str){
       if(str[0]=='0') return false;
       int value = stoi(str);
        return value<= 255;
   }

   void solve(string &s, int ind,  int parts, string curr){
        if(ind == n && parts == 4){
          curr.pop_back();  //remove  last me " ."
          result.push_back(curr);
// result.push_back(curr.substr(0,curr.length()-1))        
    }
        if(ind+1 <= n){
           solve(s, ind+1, parts+1, curr + s.substr(ind,1)+ ".");
        }
        if(ind+2 <= n && isValid(s.substr(ind,2))){
           solve(s, ind+2, parts+1, curr + s.substr(ind,2)+ ".");
        }
        if(ind+3 <=n  && isValid(s.substr(ind,3))){
           solve(s, ind+3, parts+1, curr + s.substr(ind,3)+ ".");
        }
   }

    vector<string> restoreIpAddresses(string s) {
        result.clear();
        n = s.length();
        
        if(n>12) return result;

        string curr="";
        int parts = 0;

        solve(s,0,parts,curr);

        return result;
    }
};



Time Complexity : O(3^4×n)=O(81×n)=O(n)
since each position can branch into 3 possibilities, and the depth is bounded by 4.

Space Complexity : O(n)
recursion stack space
