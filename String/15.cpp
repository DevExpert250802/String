/*
    Company Tags                : Amazon, Facebook, Microsoft, Twitter, Apple, Google, Paypal, Bloomberg, Adobe, InfoEdge
    Leetcode Link               : https://leetcode.com/problems/integer-to-roman/
    GfG Link                    : https://practice.geeksforgeeks.org/problems/convert-to-roman-no/1
    
*/

class Solution {
public:
    string intToRoman(int num) {
        vector<int>val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>Symbol{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string result;
        for(int i=0;i<13;i++){
            if(num==0)break;
             int times=num/val[i];
            while(times--){
                result+=Symbol[i];
            }
            num=num%val[i];
        }
        return result;
    }
};




class Solution {
public:
    string intToRoman(int num) {
           map<int, string> valToSymbol = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        string result;
        for (auto it = valToSymbol.rbegin(); it != valToSymbol.rend(); it++) {
            while (num >= it->first) {
                result += it->second;
                num -= it->first;
            }
        }
        return result;
    }
};
