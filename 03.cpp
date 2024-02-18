Problem statement : You are given a string 'str' of length 'N'.Your task is to reverse the original string word by word.

There can be multiple spaces between two words and there can be leading or trailing spaces but in the output reversed string you need to put a single space between two words, and your reversed string should not contain leading or trailing spaces.

Example :If the given input string is "Welcome to Coding Ninjas", then you should return "Ninjas Coding to Welcome" as the reversed string has only a single space between two words and there is no leading or trailing space.







#include <bits/stdc++.h>
string reverseString(string &str){
    stack<string>st;
    string ans="";
    for(int i=0;i<str.length(); i++){
    if(str[i] == ' ') continue;
       string word ="";
       while(i<str.length() && str[i]!=' '){
           word+=str[i];
           i++;
       }
        st.push(word);
    }
     while(!st.empty()){
        ans += st.top();
        st.pop();
        if (!st.empty())
            ans +=' ';
    } 
    return ans;
}
