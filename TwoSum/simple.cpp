class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int flag = 0;
        for(int i = 0; i<nums.size(); i++){
            // if (nums[i] > target){
            //     continue;
            // }
            //  the number may be negative
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i]+ nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                    flag = 1;
                    break;
                }
            }
            if (flag) break;
        }
        return ans;
    }
};
