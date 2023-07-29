class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // [2,2,1,1,1,2,2]
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        // n/2 will be the middle of the array
        return nums[n/2];
    }
};
