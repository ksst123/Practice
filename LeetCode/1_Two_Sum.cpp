class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int i, j;
        
        for(i=0; i<nums.size(); i++) {
            for(j=i+1; j<nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};