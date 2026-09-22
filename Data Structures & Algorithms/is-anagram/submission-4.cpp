class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        vector<int> scount(26, 0);
        vector<int> tcount(26, 0);
        for (auto ch : s) {
            int pos = ch - 'a';
            scount[pos]++;
        }
        for (auto ch : t) {
            int pos = ch - 'a';
            tcount[pos]++;
        }
        return scount == tcount;
    }
};
