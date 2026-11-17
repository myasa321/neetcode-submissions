class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int max = 0;
        while(left < right) {
            if (max < (min(heights[left], heights[right]) * (right-left))) {
                max = min(heights[left], heights[right]) * (right-left);
            }
            if (heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max;
    }
};
