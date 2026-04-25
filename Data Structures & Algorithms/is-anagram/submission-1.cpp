class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> h1(26,0), h2(26,0);
        for(char ch : s) {
            h1[ch-97]++;
        }
        for(char ch : t) {
            h2[ch-97]++;
        }
        for(int i=0; i<26; i++)
            if(h1[i]!=h2[i])
                return false;
        return true;
    }
};
