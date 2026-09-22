class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (const auto num : nums) {
            counts[num]++;
        }
        vector<int> sorted;
        sorted.reserve(counts.size());
        for (const auto &p : counts) {
            sorted.push_back(p.first);
        }
        std::sort(sorted.begin(), sorted.end(), [&counts](int a, int b) {
            return counts[a] > counts[b];
        });

        return {sorted.begin(), sorted.begin() + k};
    }
};
