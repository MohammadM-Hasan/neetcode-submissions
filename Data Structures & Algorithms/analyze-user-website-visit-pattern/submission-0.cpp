class Solution {
public:

    struct Visit
    {
        string username;
        int timestamp;
        string website;
    };

    vector<string> mostVisitedPattern(vector<string>& username, vector<int>& timestamp, vector<string>& website) 
    {
        unordered_map<string, vector<string>> userVisits;
        vector<Visit> visits;

        // Step 1: Combine the data
        for(int i = 0; i < username.size(); i++)
        {
            visits.push_back({username[i], timestamp[i], website[i]});
        }

        // Step 2: Sort visits by time
        sort(visits.begin(), visits.end(),
        [](const Visit& a, const Visit& b)
        {
            return a.timestamp < b.timestamp;
        });

        // Step 3: Build each user's visit history
        for(const Visit& visit : visits)
        {
            userVisits[visit.username].push_back(visit.website);
        }


        // Step 4: Count patterns
        unordered_map<string, int> patternCount;

        for(auto& [user, sites] : userVisits)
        {
            unordered_set<string> seen;

            for(int i = 0; i < sites.size(); i++)
            {
                for(int j = i + 1; j < sites.size(); j++)
                {
                    for(int k = j + 1; k < sites.size(); k++)
                    {
                        string pattern = sites[i] + "," + sites[j] + "," + sites[k];

                        // Count this pattern only once per user
                        if(!seen.count(pattern))
                        {
                            patternCount[pattern]++;
                            seen.insert(pattern);
                        }
                    }
                }
            }
        }


        // Step 5: Find the best pattern
        string bestPattern = "";
        int maxCount = 0;

        for(auto& [pattern, count] : patternCount)
        {
            if(count > maxCount || 
              (count == maxCount && pattern < bestPattern))
            {
                bestPattern = pattern;
                maxCount = count;
            }
        }


        // Step 6: Convert string back to vector<string>
        vector<string> answer;
        string current = "";

        for(char c : bestPattern)
        {
            if(c == ',')
            {
                answer.push_back(current);
                current = "";
            }
            else
            {
                current += c;
            }
        }

        answer.push_back(current);

        return answer;
    }
};  