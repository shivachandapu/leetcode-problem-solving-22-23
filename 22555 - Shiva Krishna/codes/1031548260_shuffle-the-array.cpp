class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output;
        int j = n;
        for(int i = 0; i<n; i++){
            output.push_back(nums[i]);
            output.push_back(nums[j++]);
        }
        return output;
    }
};