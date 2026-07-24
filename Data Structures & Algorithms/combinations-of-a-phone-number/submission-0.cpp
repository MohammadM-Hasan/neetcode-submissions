class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return {};

        std::string digitToChar[10] = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        std::vector<std::string> res;
        backtrack(0, "", digits, digitToChar, res);
        return res;
    }

private:
    void backtrack(int i, std::string curStr, const std::string &digits,
                   std::string digitToChar[], std::vector<std::string> &res) {
        if (curStr.size() == digits.size()) {
            res.push_back(curStr);
            return;
        }
        for (char c : digitToChar[digits[i] - '0']) {
            backtrack(i + 1, curStr + c, digits, digitToChar, res);
        }
    }
};
