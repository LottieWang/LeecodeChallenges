class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        std::unordered_map<int, int> map;
        std::unordered_map<int, int>::const_iterator got;
        int complement = 0;
        for (int i = 0; i < nums.size(); i++){
            complement = target - nums[i];
            got = map.find(complement);
            if (got != map.end()){
                ans[0] = got->second;
                ans[1] = i;
                break;
            }
            map.insert(std::make_pair(nums[i],i));
            // https://stackoverflow.com/questions/9641960/c11-make-pair-with-specified-template-parameters-doesnt-compile
            // map.insert(std::make_pair<int,int>(nums[i],i)) error; 
        }
        return ans;
    }
};
