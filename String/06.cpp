/*
    
Problem statement
You are given a string 'S'. Your task is to check whether the string is palindrome or not. For checking palindrome, consider alphabets and numbers only and ignore the symbols and whitespaces.

Note :String 'S' is NOT case sensitive.
Example :

Let S = “c1 O$d@eeD o1c”.
If we ignore the special characters, whitespaces and convert all uppercase letters to lowercase, we get S = “c1odeedo1c”, which is a palindrome. Hence, the given string is also a palindrome.


  Link : https://bit.ly/3E55FvF 


*/



#include <bits/stdc++.h> 

  bool isValidChar(char ch){
  if((ch >='a' && ch<= 'z') ||(ch >= '0' && ch<= '9')) return true;
  return false;
}


void toLowerCase(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
}


bool checkPalindrome(string s){
    toLowerCase(s);
    int i=0, j=s.length()-1;
    bool isPalindrome=true;
    while(i<j){
      if(isValidChar(s[i]) && isValidChar(s[j])){
        if(s[i]==s[j]){
         i++; j--;
         continue;
        } else {
         isPalindrome = false;
         break;
        }
      }
      if(!isValidChar(s[i])) i++;
      if(!isValidChar(s[j])) j--;
    }
   return isPalindrome;
}



