Problem statement  


You are given a string 'STR'. The string contains [a-z] [A-Z] [0-9] [special characters]. You have to find the reverse of the string.



#include <bits/stdc++.h> 
string reverseString(string str)
{
	int start=0;
	int end=str.size()-1;
	while(start<end){
		swap(str[start++],str[end--]);
	}
	return str;
}


