#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(char s[],int n){
    int start=0,end=n-1;
    while(start<end){
        if(s[start]!=s[end]) return false;
        start++,end--;
    }
    return true;
}
int main(){
    char string [27];
    cout<<"Enter your name:";
    cin>>string;
    int n = strlen(string);  // Use strlen to get the length of the input string
    bool isPalindrome = checkPalindrome(string, n);
    cout << "Is palindrome: " << (isPalindrome ? "True" : "False") << endl;
    return 0;
}
