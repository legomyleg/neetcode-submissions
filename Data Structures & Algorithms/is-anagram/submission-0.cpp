class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        for (int i=0; i<s.length(); i++) {
            int curr_len = t.length();
            for (int j=0; j<curr_len; j++) {
                if (s.at(i) == t.at(j)) {
                    t.erase(j, 1);
                    break;
                }
            }
            if (curr_len == t.length()) return false;
        }
        return true;
    }
};
