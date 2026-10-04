class Solution {
public:
    bool hasDuplicate(vector<int> nums) {
        unordered_map<int, int> seen = {};

        for (int each: nums){
            seen[each] += 1;
            if (seen[each] > 1)
                return true;
        }
        return false;
    }
};