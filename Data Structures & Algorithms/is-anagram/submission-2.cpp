class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> smap;
        std::unordered_map<char, int> tmap;

        for (auto ch : s) {
            smap[ch]++;
        }
        for (auto ch : t) {
            tmap[ch]++;
        }
        return smap == tmap;
    }
};
