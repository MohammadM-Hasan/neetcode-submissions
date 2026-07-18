class Solution {
public:
    string customSortString(string order, string s) {
       unordered_map<char , int> freq;

        for(char c : s)
            freq[c]++;
        
    
        string res = "";
        for(char c : order)
        {
            int n = freq[c];

            while(n--)
            {
                res += c;
            }

            freq[c] = 0;
        }

        for(char c : s)
        {
            while(freq[c] > 0)
            {
                res += c;
                freq[c]--;
            }
        }

        return res;
    }
};