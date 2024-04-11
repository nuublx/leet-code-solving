class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> unique;
        for(auto x : nums){
            unique.insert(x);
        }
        return unique.size() != nums.size(); 
    }
};