class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> counting_array(nums.size() + 1);
        map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(auto& i : mp){
            counting_array[i.second].push_back(i.first);
        }
        vector<int> results;
        for(int i = nums.size(); i>= 0 && k > 0; i--){
            if(counting_array[i].empty()){
                continue;
            }
            for(int j = 0; j < counting_array[i].size() && k > 0; j++){
                results.push_back(counting_array[i][j]);
                k--;
            }
        }
        return results;

        /* solution number 1
         map<int, int> mp;
         for (int i = 0; i < nums.size(); i++){
             mp[nums[i]]++;
         }
         priority_queue<pair<int, int>> pq;
         for (auto& i : mp ){
             pair<int,int> pr;
             pr.first = i.second;
             pr.second = i.first;
             pq.push(pr);
         }
         vector<int> results;
        
         for(int i = 0; i < k; i++){
             results.push_back(pq.top().second);
             pq.pop();
         }
         return results; */



    
    }
};