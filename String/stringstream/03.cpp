/*
A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.
 

Example 1:

Input: s1 = "this apple is sweet", s2 = "this apple is sour"
Output: ["sweet","sour"]
Example 2:

Input: s1 = "apple apple", s2 = "banana"
Output: ["banana"]
*/

  class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2){
        unordered_map<string,int>mp;
        stringstream ss1(s1),ss2(s2);
        string word1,word2;

        while(ss1>>word1){
            mp[word1]++;
        }
          while(ss2>>word2){
            mp[word2]++;
        }
        vector<string>ans;
        for(auto it :mp){
            if(it.second==1) ans.push_back(it.first);
        }
        return ans;
    }
};
