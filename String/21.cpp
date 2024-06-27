/*
    Company Tags                : GOOGLE
    Leetcode Link               : https://leetcode.com/problems/detect-capital/
*/

//Approach-1 (Simple Checks)
//NOTE :  YOU can also use isupper() C++ function to check capital
class Solution {
public:
    bool allCapitals(string word) {
        for(char ch:word) {
            if(ch <'A' || ch >'Z')
                return false;
        }
        return true;
    }
    bool allSmall(string word) {
        for(char ch:word) {
            if(ch <'a' || ch >'z')
                return false;
        }
        return true;
    }
    
    bool detectCapitalUse(string word) {
        if(allCapitals(word) || allSmall(word) || allSmall(word.substr(1)))
            return true;
        return false;
    }
};


//Approach-2 (Small and simple)

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count_Capital=0;
        for(char ch: word){
             if(isupper(ch))count_Capital++;
        }
        if(count_Capital==0)return true;
        if(count_Capital==1 && isupper(word[0]))return true;
        if(count_Capital==word.length())return true;
        return false;
    }
};
