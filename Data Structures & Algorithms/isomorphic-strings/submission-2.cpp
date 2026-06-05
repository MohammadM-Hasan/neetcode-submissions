class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> mp;
        unordered_map<char , char> used;

        for(int i = 0 ; i < s.size(); i++)
        {
            char a = s[i];
            char b = t[i];

            if(mp.count(a))
            {
                if(mp[a] != b)
                    return false;
            }
            else
            {
                if(used.count(b))
                    return false;
                
                mp[s[i]] = t[i];

                mp[a] = b;
                used[b] = a;
            }
           
        }

        return true;
    }
};