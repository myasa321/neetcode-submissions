#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> letters;
        for (int i = 0; i < s.size(); i++) {
            if (letters.contains(s[i])) {
                letters[s[i]]++;
            } else {
                letters[s[i]] = 1;
            }
        }
        if (t.size() != s.size()) {return false;}
        for (int i = 0; i < t.size(); i++) {
            if (letters.contains(t[i])) {
                if (letters[t[i]] == 0) {
                    return false;
                } else {
                    letters[t[i]]--;
                }

            } else {
                return false;
            }
        }
        return true;
    }
};
