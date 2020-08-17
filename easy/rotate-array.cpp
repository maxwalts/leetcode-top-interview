class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        
        
        //use reverse(v.begin(), v.end()) method for vectors
        
        //IMPORTANT: the second argument should be the "one past" element.
        
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
