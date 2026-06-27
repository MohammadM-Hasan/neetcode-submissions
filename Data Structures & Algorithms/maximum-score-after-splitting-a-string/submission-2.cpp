class Solution {
public:
    int maxScore(string s) {
        int zerosSum = 0;
        int onesSum = 0;
        int result = 0;

        // calculate number of ones and zeros
        for(char c : s)
        {
            if(c == '0')
                zerosSum++;
            else
                onesSum++;
        }
       
        int currTotal = onesSum;
        int leftZeros = 0;

        for(int i = 0 ; i < s.size() - 1 ; i++)
        {
            if(s[i] == '0')
                leftZeros++;
            else
                onesSum--;
            
            currTotal = leftZeros + onesSum;
            result = max(currTotal ,result);
        }

        return result;
    }
};