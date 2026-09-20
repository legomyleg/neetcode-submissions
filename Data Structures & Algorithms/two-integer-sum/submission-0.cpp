#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];
            if (seen.contains(needed)) {
                return {seen.at(needed), i};
            }
            seen.insert({nums[i], i});
        }
    }
};
