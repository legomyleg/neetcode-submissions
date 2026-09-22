class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> groups;
        for (const auto& str : strs) {
            vector<int> count(26, 0);
            for (const auto ch : str) {
                count[ch - 'a']++;
            }

            string key = encode(count);
            if (groups.contains(key)) {
                groups[key].push_back(str);
            } else {
                groups[key] = {str};
            }
        }

        vector<vector<string>> solution;
        solution.reserve(groups.size());
        for (const auto &pair : groups) {
            solution.push_back(pair.second);
        }
        return solution;
    }
private:
    string encode(const vector<int> &count) {
        string output;
        for (const auto val : count) {
            output += '#' + to_string(val);
        }
        return output;
    }
};
