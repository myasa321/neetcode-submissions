#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> vals;
        for (int i = 0; i < s.size(); i++) {
            if (vals.empty()) {
                vals.push(s[i]);
            } else if (s[i] == '}') {
                if (vals.top() == '{') {
                    vals.pop();
                } else {
                    vals.push(s[i]);
                }
            } else if (s[i] == ']') {
                if (vals.top() == '[') {
                    vals.pop();
                } else {
                    vals.push(s[i]);
                }
            } else if (s[i] == ')') {
                if (vals.top() == '(') {
                    vals.pop();
                } else {
                    vals.push(s[i]);
                }
            } else {
                vals.push(s[i]);
            }
        }
        if (vals.empty()) {
            return true;
        }
        return false;
    }
};
