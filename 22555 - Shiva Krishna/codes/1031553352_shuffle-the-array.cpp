class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output(2*n);
        int k = 0;
        for(int i=0,j=n; i<n; ++i,++j){
            output[k] = nums[i];
            output[k+1] = nums[j];
            k += 2;
        }
        return output; 
    }
};