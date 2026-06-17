class Solution {
public:
    vector<int> merge(vector<int>& left, vector<int>& right)
    {
        vector<int> result;
        int i = 0;
        int j = 0;

        while (i < left.size() && j < right.size())
        {
            if (left[i] <= right[j])
                result.push_back(left[i++]);
            else
                result.push_back(right[j++]);
        }

        while (i < left.size())
            result.push_back(left[i++]);

        while (j < right.size())
            result.push_back(right[j++]);

        return result;
    }

    vector<int> mergeSort(vector<int>& nums)
    {
        if (nums.size() <= 1)
            return nums;

        int mid = nums.size() / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        left = mergeSort(left);
        right = mergeSort(right);

        return merge(left, right);
    }

    vector<int> sortArray(vector<int>& nums)
    {
        return mergeSort(nums);
    }
};