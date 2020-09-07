class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        
        map<char,int> ms;
        map<char,int> mt;
        
        for(char &c : s) {
            ms[c]++;
        }
        for(char &c : t) {
            mt[c]++;
        }
        
        for(auto &el : ms) {
            if(el.second != mt[el.first]) {
                return false;
            }
        }
        return true;
    }
};
