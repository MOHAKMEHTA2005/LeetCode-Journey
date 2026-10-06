class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int L = 0;
        int R = n - 1;
        int max_area = 0;
        while(L < R)
        {
            int area = min(height[L], height[R]) * (R - L);
            max_area = max(max_area, area);
            if(height[L] < height[R])
            {
                L++;
            }
            else
            {
                R--;
            }
        }
        return max_area;
    }
};