class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int mx = arr1[0];
        for(int x : arr1)
        {
            mx = max(mx , x);
        }

        vector<int> count(mx + 1 , 0);
        vector<int> ans;

        for (int x : arr1)
        {
            count[x]++;
        }
        for(int x : arr2)
        {
            while(count[x] > 0)
            {
                ans.push_back(x);
                count[x]--;
            }
        }

        for (int i = 0; i <= mx; i++) {
        while (count[i] > 0) {
            ans.push_back(i);
            count[i]--;
        }
}

    return ans;
    }
};