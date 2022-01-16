class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        for(std::vector<int>::iterator itr = nums.begin(); itr != nums.end(); itr++)
        {
            if (*itr == target)
                return i;
            
            i++;
        }
        return -1;
    }
};