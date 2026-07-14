class Solution {
public:

    string normalizeLocal(string local)
    {
        size_t plusPosition = local.find('+');

        if (plusPosition != string::npos)
        {
            local.erase(plusPosition);
        }

        string normalized;

        for (char c : local)
        {
            if (c != '.')
            {
                normalized += c;
            }
        }

        return normalized;
    }

    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> normalizedEmails;

        for (const string& email : emails)
        {
            size_t position = email.find('@');

            string local = email.substr(0, position);
            string domain = email.substr(position);

            string normalized = normalizeLocal(local) + domain;
            normalizedEmails.insert(normalized);
        }

        return normalizedEmails.size();
    }
};