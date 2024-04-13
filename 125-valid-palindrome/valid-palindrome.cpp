class Solution {
public:
    
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while(l <= r){
            cout<<"letters: "<<s[l]<< "  "<<s[r]<<endl;
            while(iswalnum(s[l]) == 0 && l <= r){
                l++;
            }
            if ( l > r) break;
            while(iswalnum(s[r]) == 0 && l <= r){
                r--;
            }
            if ( l > r) break;
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};