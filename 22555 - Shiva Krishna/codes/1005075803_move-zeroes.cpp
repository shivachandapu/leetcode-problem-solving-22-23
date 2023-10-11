class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0,pos=0; i<nums.size(); ++i) // pos = position of zero
                if(nums[i] != 0)
                    swap(nums[pos++],nums[i]);        
    }
};