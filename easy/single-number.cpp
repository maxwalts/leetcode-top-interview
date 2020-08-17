class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        
        //XORing all numbers together results in the one pairless number.
        for(int i = 0; i < nums.size(); ++i) {
            a = a ^ nums[i];
        }
        
        return a;
    }
};
