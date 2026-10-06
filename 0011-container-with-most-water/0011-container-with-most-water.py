class Solution(object):
    def maxArea(self, height):
        n = len(height)
        L = 0
        R = n-1
        max_area = 0
        while L < R:
            area = min(height[L], height[R]) * (R - L)
            max_area = max(max_area, area)
            if height[L] < height[R]:
                L += 1
            else:
                R -= 1
        return max_area