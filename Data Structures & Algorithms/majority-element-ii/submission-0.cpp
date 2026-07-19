class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        unordered_map<int , int> freq;

        for(int num : nums)
        {
            freq[num]++;
        }

        for(auto &p : freq)
        {
            if(p.second > nums.size() / 3)
                result.push_back(p.first);
        }

        return result;
    }
};