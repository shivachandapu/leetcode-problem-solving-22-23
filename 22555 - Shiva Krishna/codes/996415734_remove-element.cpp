class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j=nums.size();

        for(i=0; i<j; i++){
            if(nums[i] == val){
                while(i<j && nums[--j] == val){}
                if(i<j)
                    nums[i] = nums[j];
                else
                    break;
            }
        }
        return i;
    }
};