class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> smap;
        for(string str : strs) {
            vector<int> ana(26, 0);
            for(int i=0; i<str.length(); i++) {
                ana[str[i]-97]++;
            }
            string sign="";
            for(int a : ana) {
                sign+='#'+to_string(a);
            }
            smap[sign].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto it=smap.begin(); it!=smap.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
