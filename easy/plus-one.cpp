class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto it1 = digits.rbegin();
        
        while(*it1 == 9) {
            *it1 = 0;
            ++it1;
            
            if (it1 == digits.rend()) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        
        ++*it1;
        return digits;
    }
};
