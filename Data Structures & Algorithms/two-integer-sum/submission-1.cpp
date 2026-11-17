#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        unordered_map <int, int> values;
        for (int i = 0; i < nums.size(); i++) {
            if (values.contains(target-nums[i])) {
                answer.push_back(values[target-nums[i]]);
                answer.push_back(i);
                return answer;
            } else {
                values[nums[i]] = i;
            }
        }
        return answer;
    }
};
