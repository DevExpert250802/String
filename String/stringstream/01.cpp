/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".


Example 1:

Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"
Example 2:

Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"

  */

class Solution {
public:
    string defangIPaddr(string address) {
        stringstream ss(address);
        string ans,word;
        while(getline(ss,word,'.')){
            ans += word + "[.]";
        }

        return ans.substr(0,ans.length()-3);
    }
};
//he reason "." is not used as the delimiter in getline is because getline requires a single character delimiter
