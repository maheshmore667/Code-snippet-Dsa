private: 
    void createPermutations(vector<int> nums, vector<vector<int>>& ans, int index) {

        //base case 
        if(index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            createPermutations(nums, ans, index+1);
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        createPermutations(nums, ans, 0);
        return ans;
    }