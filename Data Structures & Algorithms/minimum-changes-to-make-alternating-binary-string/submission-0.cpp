class Solution {
public:
    int minOperations(string s) {
        int startWithZero = 0;
        int startWithOne = 0;

        for (int i = 0; i < s.length(); i++) {
            char expectedZero = (i % 2 == 0) ? '0' : '1';
            char expectedOne  = (i % 2 == 0) ? '1' : '0';

            if (s[i] != expectedZero)
                startWithZero++;

            if (s[i] != expectedOne)
                startWithOne++;
        }

        return min(startWithZero, startWithOne);
    }
};