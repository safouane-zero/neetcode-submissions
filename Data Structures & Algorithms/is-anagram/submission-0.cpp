class Solution {
public:
    bool isAnagram(string s, string t) {
        unsigned length = s.length();
        unordered_map<char, int> string_1 = {};

        if (s.length() != t.length())
            return false;

        for (unsigned i = 0; i < length; i++){
            string_1[s[i]] += 1;
            string_1[t[i]] -= 1;
        }

        for (const auto &[key, value] : string_1) {
            if (value != 0) {
                return false;
            }
        }
        return true;
    }
};
