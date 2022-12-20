class Solution {
private  : 
     void solveSubsets(vector<int>& nums, vector<int> output,  vector<vector<int>>& ans, int index) {
         if(index >= nums.size()) {
             ans.push_back(output);
             return ;
         }
         //exclude
         solveSubsets(nums, output, ans, index+1);

         //include
         int num = nums[index];
         output.push_back(num);
         solveSubsets(nums, output, ans, index+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        solveSubsets(nums, output, ans, 0);
        return ans;
    }
};