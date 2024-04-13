class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
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
        return results;
    }
};