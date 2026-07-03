class Solution {
public:
    int minOperations(string s) {
        int mismatch = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ('0' + (i & 1)))
                mismatch++;
        }

        return min(mismatch, (int)s.size() - mismatch);
    }
};