#include <cmath>
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(abs(ans) > abs(nums[i]))
            {
                ans = nums[i];
            }
            else if(abs(nums[i]) == abs(ans) && nums[i] > 0)
            {
                ans = nums[i];
            }
        }
        return ans;
    }
};