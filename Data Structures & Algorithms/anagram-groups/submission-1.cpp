#include <unordered_set>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups;
        for (auto &str : strs) {
            string index = str;
            std::sort(index.begin(), index.end());
            if (groups.contains(index)) {
                groups[index].push_back(str);
            } else {
                groups[index] = {str};
            }
        }
        vector<vector<string>> solution;
        solution.reserve(groups.size());
        for (const auto &pair: groups) {
            solution.push_back(pair.second);
        }
        return solution;
    }
};