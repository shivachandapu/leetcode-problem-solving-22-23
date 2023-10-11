class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> out;
        int n = nums.size();
        int i,j;
        
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(nums[i]+nums[j] == target){
                    out.push_back(i);
                    out.push_back(j);
                    break;
                }
        return out;             
                    
    }
};