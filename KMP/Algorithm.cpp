    void fillLPS(string &str, vector<int>& lps) {
        int n = str.size();
        int len = 0, i = 1;
        lps[0] = 0; 
        
        while (i < n) {
            if (str[i] == str[len]) {
                len++;
                lps[i] = len;
                i++; 
            } else {
                if (len == 0) {
                    lps[i] = 0;
                    i++; 
                } else {
                    len = lps[len - 1];
                }
            }
        }
    }

    int KMP(string Text, string Pattern) {
        int n = Text.size(), m = Pattern.size();
        vector<int> lps(m);
        fillLPS(Pattern, lps);
        
        int i = 0, j = 0;
        while (i < n) {
            if (Text[i] == Pattern[j]) {
                i++;
                j++;
            }

            if (j == m) {
                return i - j; 
            } else if (i < n && Text[i] != Pattern[j]) {
                if (j == 0) {
                    i++;
                } else {
                    j = lps[j - 1];
                }
            }
        }
        return -1; 
    }

T.C. = O(n+m)
