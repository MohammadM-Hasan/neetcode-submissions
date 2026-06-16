class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;

        for(int num : nums1)
        {
            auto it = find(nums2.begin() ,nums2.end() , num);
            int index = distance(nums2.begin() , it);
            bool found = false;

            for(int j = index + 1 ; j < nums2.size() ; j++)
            {
                if(nums2[j] > nums2[index])
                {
                    result.push_back(nums2[j]);
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                result.push_back(-1);
            }
        }

        return result;
    }
};