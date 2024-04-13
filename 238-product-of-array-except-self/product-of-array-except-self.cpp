class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size()), postfix(nums.size()), output(nums.size());
        // build prefix
        prefix[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            prefix[i] = prefix[i - 1] * nums[i]; 
        }

        // build postfix
        postfix[nums.size() - 1] = nums[nums.size() - 1];
        for(int i = nums.size() - 2; i >=0; i--){
            postfix[i] = postfix[i + 1] * nums[i]; 
        }

        for(int i = 0; i < nums.size(); i++){
            if (i == 0){
                output[i] = postfix[i + 1];
            }
            else if( i == nums.size() - 1){
                output[i] = prefix[i - 1];
            }
            else {
                output[i] = prefix[i - 1] * postfix[i + 1];
            }
        }
        
        return output;
    }
};