/*
    Company Tags                : GOOGLE, META
    Leetcode Link               : https://leetcode.com/problems/buddy-strings/
*/
class Solution {
public:
    bool checkFreq(string &s) {
        set<char> st;
        for (char ch : s) {
            st.insert(ch);
        }
        if (st.size() < s.size()) {
            return true;
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        int n = s.size(), m = goal.size();

        if(n!=m)return false;

        if(s == goal)return  checkFreq(s);

        vector<int>index;
        for(int i=0;i<n;i++){
            if(s[i] != goal[i]) 
            index.push_back(i);
        }

        if(index.size() != 2)return false;
        
        swap(s[index[0]],s[index[1]]);
        return s == goal;
    }
};














class Solution {
public:
    bool checkFreq(string &s) {
        int arr[26] = {0};
        
        for(char &ch : s) {
            arr[ch-'a']++;
            
            if(arr[ch-'a'] > 1) {
                return true;
            }
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        int n = s.size(), m = goal.size();

        if(n!=m)return false;

        if(s == goal)return  checkFreq(s);

        vector<int>index;
        for(int i=0;i<n;i++){
            if(s[i] != goal[i]) 
            index.push_back(i);
        }

        if(index.size() != 2)return false;
        
        swap(s[index[0]],s[index[1]]);
        return s == goal;
    }
};
