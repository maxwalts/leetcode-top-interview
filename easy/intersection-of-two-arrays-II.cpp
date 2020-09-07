class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m;
        
        for (auto &el : nums1) {
            ++m[el];
        }
        
        vector<int> ans;
        for (auto &el : nums2) {
            if (m[el] > 0) {
                ans.push_back(el);
                --m[el];
            }
        }
        
        return ans;
    }
};
