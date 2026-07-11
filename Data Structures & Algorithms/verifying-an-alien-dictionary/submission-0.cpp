class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> rank(26);

        for (int i = 0; i < 26; i++)
            rank[order[i] - 'a'] = i;

        for (int i = 0; i < words.size() - 1; i++) {
            string first = words[i];
            string second = words[i + 1];

            int j = 0;

            while (j < first.size() && j < second.size()) {
                if (first[j] != second[j]) {
                    if (rank[first[j] - 'a'] > rank[second[j] - 'a'])
                        return false;
                    break;
                }
                j++;
            }

            if (j == second.size() && first.size() > second.size())
                return false;
        }

        return true;
    }
};