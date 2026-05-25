class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int c = 0;

        if(strs.size() > 1)
        {
            while(true)
            {
                if(c >= strs[0].size())
                    return result;
                char currCharacter = strs[0][c];

                for(int word = 1 ; word < strs.size() ; word++)
                {
                    if(c >= strs[word].size() ||
                    strs[word][c] != currCharacter)
                        return result;
                }

                result += currCharacter;
                c++;
            }
        }
        else 
            result += strs[0];
        

        return result; 
        }
};