class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i=0; i<n; ++i){
            nums[i+1] += nums[i];
        }
        return nums;
    }
};