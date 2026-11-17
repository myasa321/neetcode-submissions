class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> letters;
        int count = 0;
        int maxCount = 0;
        int left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (letters.contains(s[i])) {
                if (maxCount < count) {
                    maxCount = count;
                }
                while (letters.contains(s[i])){
                    letters.erase(s[left]);
                    left++;
                    count--;
                }
                letters.insert(s[i]);
                count++;
            } else {
                count++;
                letters.insert(s[i]);
            }
        }
        if (maxCount < count) {
            maxCount = count;
        } 
        return maxCount;
    }
};
