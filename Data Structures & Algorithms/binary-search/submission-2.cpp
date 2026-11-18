class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int index = nums.size()/2;
        int size = nums.size()-1;
        while (size != 0 && start < size) {
            if (target > nums[index]) {
                start = index+1;
                index = ((size-start)/2) + start;
            } else if (target < nums[index]) {
                size = index;
                index = ((size-start)/2)+start;
            } else {
                return index;
            }
        }
        if (nums.size() == 1) {
            if (target == nums[0]) {
                return 0;
            }
        }
        if (target == nums[index]) return index;
        return -1;
    }
};
