class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) { 
        unordered_map<int,int> freq;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;

        for(int num : nums)
        {
            freq[num]++;
        }

        for(auto pair : freq)
        {
            int number = pair.first;
            int frequency = pair.second;

            buckets[frequency].push_back(number);
        }
        for(int i = buckets.size() - 1; i >= 0; i--)
        {
            for(int num : buckets[i])
            {
                if(k > 0)
                {
                    result.push_back(num);
                    k--;
                }
                else
                    return result;
            }
        }  

        return result; 
    }
};
