/*
    Company Tags                : Google, Microsoft, Atlassian, Morgan Stanely, Adobe, Uber
    Leecode Link                : https://leetcode.com/problems/determine-if-two-strings-are-close/
*/

/*************************************************************************** C++ **********************************************************************/
//T.C : O(n)
//S.C : O(26) ~ O(1)


class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n= word1.size() , m=word2.size();
        if(m != n)return false;
        vector<int> freq1(26),freq2(26);

        for(int i=0;i<n;i++){
            char ch1 = word1[i];
            char ch2 = word2[i];
            int ind1 = ch1 - 'a';
            int ind2 = ch2 - 'a';
            freq2[ind1]++;
            freq1[ind2]++;
        }
        // 1st point - jo character word1 me hai vo character word2 me bhii hone chaiyeee
        for(int i=0;i<26;i++){
            if(freq1[i]==0  && freq2[i] ==0) continue;
            if(freq1[i]!=0  && freq2[i] !=0) continue;
            return false;
        }
        // 2nd point - check frequency (if frequency is same we can interchange the value)
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2;
    }
    
};






auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
