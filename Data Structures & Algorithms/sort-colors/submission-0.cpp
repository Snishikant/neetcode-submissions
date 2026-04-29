class Solution {
public:
    void sortColors(vector<int>& nums) {
        size_t n=nums.size();
        int r=0,b=n-1,i=0;
        while(i<=b) {
            if(nums[i]==0) {
                swap(nums[i],nums[r]);
                r++;
                i++;
            }
            else if(nums[i]==2) {
                swap(nums[i],nums[b]);
                b--;
            }
            else
                i++;
        }
    }
};