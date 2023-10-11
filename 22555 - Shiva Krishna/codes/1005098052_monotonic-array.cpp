class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0, n=nums.size();

        if(n==1){
            return true;
        }

        while(nums[i]==nums[i+1] and i<n-2){
            ++i;
        }

        if(nums[i]<nums[i+1]){
            for(int j=i; j<n-1; ++j)
                if(nums[j] > nums[j+1])
                    return false;
        }
        else if (nums[i]>nums[i+1])
             for(int j=i; j<n-1; ++j)
                if(nums[j] < nums[j+1])
                    return false;
        
        return true;
    }
};