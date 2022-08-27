class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        for(int i : nums) {
            i = abs(i);
            //if number is negative on that position is negative then it is already visited means
            // that is duplicate
            if(nums[i-1]> 0) {
                nums[i-1] = nums[i-1]*-1;
            } else {
                result.push_back(i);
            }
        }
        
        return result;
    }
};