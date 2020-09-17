class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int oCount = 0;
        
        for(int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                ++oCount;
            }
        }
        
        while (oCount != 0) {
            for(int i = 0; i < nums.size() - 1; ++i) {
                if(nums[i] == 0) {
                    std::swap(nums[i], nums[i + 1]);
                }
            }
            --oCount;
        }
    }
};
