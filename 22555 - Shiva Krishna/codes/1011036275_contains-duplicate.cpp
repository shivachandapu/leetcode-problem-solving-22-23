class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> ump;
        for(int i=0; i<n; ++i){
            if(ump[nums[i]] == 0){
                ump[nums[i]] = 1;
            }
            else
                return true;
        }
        return false;
    }
};