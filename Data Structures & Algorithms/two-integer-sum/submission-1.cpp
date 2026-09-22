class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
        for (int i=0; i<nums.size(); i++) {
            int needed = target - nums[i];
            if (seen.contains(needed)) {
                return {seen[needed], i};
            }
            seen[nums[i]] = i;
        }
    }
};
