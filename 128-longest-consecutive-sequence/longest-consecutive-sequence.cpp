class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int longest = 0;
        for(auto& i: nums)
            st.insert(i);

        for(auto& i: st){
            if (st.find(i - 1) != st.end()){
                continue;
            }
            int cons = 1;
            while(st.find(i + cons) != st.end()){
                cons++;
            }
            longest = cons > longest ? cons : longest;
        }
        return longest;
    }
};