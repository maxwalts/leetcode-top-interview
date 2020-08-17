class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //set cTor with (it1, it2) arguments. 
        set<int> s (nums.begin(), nums.end());
        
        //set.size() to get size. Size are uniqe elements.
        
        //if a number is duplicated, then nums.size() will != set.size().
        if (s.size() != nums.size()) {
            return true;
        }
        else {
            return false;
        }
        
    }
};
