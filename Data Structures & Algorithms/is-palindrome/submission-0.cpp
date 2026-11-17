#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        char left = 0;
        char right = s.size()-1;
        while (left < right) {
            if (!isalnum(s[left])) {
                left++;
            } else if (!isalnum(s[right])) {
                right--;
            } else {
                if (tolower(s[left]) != tolower(s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};
