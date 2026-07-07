class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> allowedChars;

        // Store allowed characters
        for (char c : allowed)
            allowedChars.insert(c);

        int count = 0;

        // Check each word
        for (string word : words) {
            bool isConsistent = true;

            for (char c : word) {
                if (allowedChars.find(c) == allowedChars.end()) {
                    isConsistent = false;
                    break;
                }
            }

            if (isConsistent)
                count++;
        }

        return count;
    }
};