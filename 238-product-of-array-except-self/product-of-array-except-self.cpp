class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size());
        int prefix = 1, postfix = 1;
        // build prefix
        output[0] = prefix;
        for (int i = 1; i < nums.size(); i++){
            prefix *= nums[i - 1];
            output[i] = prefix;
        }

        // build postfix
        output[nums.size() - 1] *= postfix;
        for( int i = nums.size() - 2; i >= 0; i--){
            postfix *= nums[i + 1];
            output[i] *= postfix;
        }
        return output;
    }
};