class Solution {
public:
    vector<int> topKFrequent(vector<int> nums, int k) {
        unordered_map<int, int> frequency = {};
        vector<int>	output = {};

        for (int number: nums)
            frequency[number] += 1;
        vector<pair<int, int>> freq_sorted(frequency.begin(), frequency.end());
        sort(freq_sorted.begin(), freq_sorted.end(), [](pair<int, int>& a, pair<int, int>& b){return a.second > b.second;});

        for (auto it = freq_sorted.begin(); it != freq_sorted.end() && k; it++)
        {
            output.push_back(it->first);
            k--;
        }
        return output;
    }
};
