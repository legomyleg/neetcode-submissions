class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (const auto num : nums) {
            counts[num]++;
        }
        vector<vector<int>> sorted(nums.size());
        for (const auto &[num, count] : counts) {
            sorted.at(count - 1).push_back(num);
        }
        
        vector<int> solution;
        int i = nums.size() - 1;
        while (solution.size() < k) {
            if (sorted.at(i).empty()) {
                i--;
                continue;
            }
            solution.push_back(sorted.at(i).back());
            sorted.at(i).pop_back();
        }
        return solution;
    }
};
