class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0; i<nums.size()-1; ++i){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        for(int j=0,pos=0; j<nums.size(); ++j)
            if(nums[j] != 0)
                swap(nums[pos++],nums[j]);
        
        return nums;
        
    }
};