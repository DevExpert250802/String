/*
    Company Tags                 : Amazon (With variations), Microsoft, MentorGraphics, MakeMyTrip, Accolite, Adobe, Cisco, Goldman Sachs,Paytm, 
                                   Samsung, SAP Labs
    Leetcode Link                : https://leetcode.com/problems/reverse-words-in-a-string/
Problem statement
You are given a string 'str' of length 'N'.Your task is to reverse the original string word by word.There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.
Example :If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space
Input: s = "  hello world  "
Output: "world hello"
*/

//Approach-1 (use of stack)

class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') continue;
            string word;
            while(i<s.length() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            st.push(word);   
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
            if(!st.empty()){
                ans+=" ";
            }
        }
        return ans;
    }
};




//Approach-2 (Perfect use of std::stringstream)
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string token = "";

        string result = "";
        //By default stringstream tokenizes on ' ' (space character)
        while(ss >> token) {
            result = token + " " + result;
        }

        return result.substr(0, result.length()-1);
    }
};





//Approach-3 (Two Pointer)
class Solution {
public:
    string reverseWords(string s) {
        //story
        //1. reverse whole string
        
        reverse(s.begin(), s.end());
        
        int i = 0;
        //hero honge hamare l and r jo revrese karenge words ko
        int l = 0, r = 0;
        
        int n = s.length();
        
        while(i < n) {
            while(i < n && s[i] != ' ') { //i ko agar char dikha to r ko dega and i++ and r++
                s[r++] = s[i++];
            }
            
            if(l < r) { //l     r
                reverse(s.begin()+l, s.begin()+r);
                
                s[r] = ' ';
                r++;
                
                l = r;
            }
            
            i++; //y eto badhta rahega
        }
        
        s = s.substr(0 , r-1);
        
        return s;
        
    }
};
