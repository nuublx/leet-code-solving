class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        for(int i = 0; i < nums.size(); i++){
            dict[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++){
            int goal = target - nums[i];
            if (dict.find(goal) != dict.end() && dict[goal] != i){
                return {i, dict[goal]};
            }
        }
        return {};
    }
};