class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hmap;
        for(int i=0; i<nums.size(); i++) {
            if(hmap.find(target-nums[i])!=hmap.end()) {
                auto it=hmap.find(target-nums[i]);
                if(it->second>i)
                    return {i,it->second};
                else
                    return {it->second,i};
            }
            else {
                hmap[nums[i]]=i;
            }
        }
        return {};
    }
};
