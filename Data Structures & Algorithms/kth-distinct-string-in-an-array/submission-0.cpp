class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string , int> freq;

        for(string str : arr)
        {
            freq[str]++;
        }

        int distincts = 0;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(freq[arr[i]] < 2)
            {
                distincts++;
                if(distincts == k)
                    return arr[i];
            }
        }

        return "";
    }
};