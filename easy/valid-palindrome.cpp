class Solution {
public:
    bool isPalindrome(string s) {
        auto it1 = s.begin();
        auto it2 = s.rbegin();
        int count = 0;
        
        while(it1 != s.end()) {
            if(!isalnum(*it1)) {
                ++it1;
            }
            else if(!isalnum(*it2)) {
                ++it2;
            }
            else if(tolower(*it1) != tolower(*it2)) {
                return false;
            }
            else {
                ++it1;
                ++it2;
            }
        }
        return true;
    }
};
