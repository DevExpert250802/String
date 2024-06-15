/*
  Check whether a string is a valid shuffle of two strings or not  
order should be maintained

 only (for distinct characters) 

    string s1 = "XY";
    string s2 = "12";
    string results = "X1Y2"
*/
bool isShuffle(string s1, string s2 , string result) {
    int l1 = s1.length();
    int l2 = s2.length();
    int lr = result.length(); 

    if (lr != (l1 + l2)) return false; 
    else {
        int i = 0, j = 0, k = 0;
        while (k < lr) {
            if (i < l1 && s1[i] == result[k])      i++;
            else if (j < l2 && s2[j] == result[k]) j++; 
            else return false; 
            k++;
        }
    }

    return true; 
}


