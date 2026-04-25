class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int n : nums) {
            hash[n]++;
        }
        for(auto it=hash.begin(); it!=hash.end(); it++) {
            if(it->second>1)
                return true;
        }
        return false;
    }
};