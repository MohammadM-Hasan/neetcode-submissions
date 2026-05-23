class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";

        for(string word : strs)
        {
            string key = to_string(word.length()) + '#';
            encoded_string += key + word;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string number = "";
        string word;

        for(int i = 0 ; i < s.length() ; i++)
        {
          
          if(s[i] != '#')
            number += s[i];
          else
            {
                for(int j = 0 ; j < stoi(number) ; j++)
                {
                    i++;
                    word += s[i];
                }
                
                result.push_back(word);
                number = "";
                word = "";
            }
        }
        return result;
    }
};
