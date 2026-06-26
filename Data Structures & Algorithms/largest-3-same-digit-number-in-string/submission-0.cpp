class Solution {
public:
    string largestGoodInteger(string num) {
        char largest = '\0';

        for (int i = 0; i <= num.size() - 3; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                largest = max(largest, num[i]);
            }
        }

        if (largest == '\0')
            return "";

        return string(3, largest);
    }
};