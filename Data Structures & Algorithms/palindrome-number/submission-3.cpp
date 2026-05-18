class Solution {
public:
    int reverseNumber(int num)
    {
        int reversedNum = 0;

        int remainder = 0;
        while(num > 0)
        {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        return reversedNum;
    }
    bool isPalindrome(int x) {
        return x == reverseNumber(x);
    }
};