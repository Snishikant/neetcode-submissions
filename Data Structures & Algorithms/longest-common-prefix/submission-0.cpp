class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int len=INT_MAX,flag=0;
        for(int i=0; i<strs.size(); i++)
            len=(len>strs[i].length())?strs[i].length():len;
        for(int i=0; i<len; i++) {
            char ch=strs[0][i];
            for(int j=1; j<strs.size(); j++) {
                if(strs[j][i]!=ch) {
                    flag=1;
                    break;
                }
            }
            if(!flag)
                ans+=ch;
            else
                break;
        }
        return ans;
    }
};