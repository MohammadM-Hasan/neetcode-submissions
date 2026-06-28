class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int lengthsSummation = 0;

        vector<int> freq(26 , 0); 
        for(char c : chars)
        {
            freq[c - 'a']++;
        }

        for(int i = 0 ; i < words.size() ; i++)
        {
            vector<int> temp(26, 0);

            for(char c : words[i])
            {
                temp[c - 'a']++;
            }

            bool good = true;

            for(int j = 0 ; j < 26 ; j++)
            {
                if(temp[j] > freq[j])
                {
                    good = false;
                    break;
                }
            }

            if(good)
            {
                lengthsSummation += words[i].size();
            }

        }

        return lengthsSummation;
    }
};