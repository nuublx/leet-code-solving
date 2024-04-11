class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        map<char, int> dict;
        for(char x: s){
            dict[x]++;
        }
        for(char x: t) {
            auto it = dict.find(x);
            if (it == dict.end() || it->second <= 0){
                return false;
            }
            it->second--;
        }
        return true;
    }
};