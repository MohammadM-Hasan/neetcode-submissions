class Solution {
public:
    int maxDifference(string s) {
        int result;
        unordered_map<char , int> freq;

        for(char c : s)
        {
            freq[c]++;
        }

        int maxOdd = 0;
        int minEven = INT_MAX;
        for(auto pair : freq)
        {
            // even 
            if(pair.second %2 == 0)
                minEven = min(minEven , pair.second);
            else
                maxOdd = max(maxOdd , pair.second);
        }

        return maxOdd - minEven;
    }
};