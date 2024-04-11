class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> dict;
        for(auto x:strs){
            string word = x;
            sort(word.begin(), word.end());
            dict[word].push_back(x);
        }
        vector<vector<string>> results;
        for(auto& x: dict){
            results.push_back(x.second);
        }
        return results;
    }


};