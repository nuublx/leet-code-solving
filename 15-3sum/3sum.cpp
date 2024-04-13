class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> results;
        int left, right, size = nums.size(), target;
        for(int i = 0; i < size; i++){
            left = i + 1;
            right = size - 1;
            while(left < right){
                target = nums[i] + nums[left] + nums[right];
                if(target < 0){
                    left++;
                } else if (target > 0){
                    right--;
                } else{
                    results.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }
            }
            while(i + 1 < size && nums[i] == nums[i + 1]) i++;
        }

        return results;
    }
};