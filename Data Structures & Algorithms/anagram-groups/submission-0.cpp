class Solution {
public:
    std::string get_sorted_string(std::string str) {
        std::sort(str.begin(), str.end());
        return str;
    }

    vector<vector<string>> groupAnagrams(vector<string> strs) {
        unordered_map<string, vector<string>> hash_map = {};
        vector<vector<string>> output = {};

        for (string s: strs)
            hash_map[get_sorted_string(s)].push_back(s);
        for (const auto& [key, value]: hash_map)
            output.push_back(value);
        sort(
            output.begin(), output.end(),
            [](vector<string> list1, vector<string> list2)
            {return list1.size() < list2.size();}
        );
        return output;
    }
};
