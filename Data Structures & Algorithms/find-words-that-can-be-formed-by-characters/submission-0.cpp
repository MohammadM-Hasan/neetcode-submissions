class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int lengthsSummation = 0;

        unordered_map<char , int> freq; 
        for(char c : chars)
        {
            freq[c]++;
        }

        unordered_map<char , int> temp; 
        for(int i = 0 ; i < words.size() ; i++)
        {
            temp.clear();

            for(char c : words[i])
            {
                temp[c]++;
            }

            bool good = true;

            for(const auto& pair : temp)
            {
                if(freq[pair.first] < pair.second)
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