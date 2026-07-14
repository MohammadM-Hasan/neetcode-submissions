class Solution {
public:

    string normalizeLocal(string local)
    {
        size_t plusPosition = local.find('+'); 

        if(plusPosition != std::string::npos)
        {
            local.erase(plusPosition);
        }

        for(int i = 0 ; i < local.size() ; i++)
        {
            if(local[i] == '.')
            {
                local.erase(i , 1);
                i--;
            }
        }

        return local;
    }

    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> normalizedEmails;
        for(const string& email : emails)
        {
            size_t position = email.find('@'); 
            string local = email.substr(0 , position);
            string domain = email.substr(position);

            string normalized = normalizeLocal(local) + domain;
            normalizedEmails.insert(normalized);
        }

        return normalizedEmails.size();
    }
};