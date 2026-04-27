class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> smap;
        for(string str : strs) {
            vector<int> ana(26, 0);
            for(int i=0; i<str.length(); i++) {
                ana[str[i]-97]++;
            }
            smap[ana].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it=smap.begin(); it!=smap.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
