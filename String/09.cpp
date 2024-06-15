/*
The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

countAndSay(1) = "1"
countAndSay(n) is the run-length encoding of countAndSay(n - 1).

Example 1:

Input: n = 4

Output: "1211"

Explanation:

countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"
  */


class Solution {
public:
    string countAndSay(int n) {

	if(n==1)return "1";
    if(n==2)return "11";
    string s="11";
    for(int i=3;i<=n;i++){
        s+="$";
		int len=s.length();
        int cnt=1;
        string temp="";
        for(int j=1;j<len;j++){
            if (s[j] != s[j - 1]) {
                temp =temp+to_string(cnt);
			    temp +=s[j-1];
			    cnt=1;
			}
			else cnt++;
        }
	s=temp;
    }
	return s;
}
};


// T.C. = O(n^2)
