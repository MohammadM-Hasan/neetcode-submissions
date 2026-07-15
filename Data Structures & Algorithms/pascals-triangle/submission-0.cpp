class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> result;

        // first row
        result.push_back({1});

        for(int i = 2; i <= numRows; i++)
        {
            vector<int> row;

            // first element
            row.push_back(1);

            // middle elements
            for(int j = 1; j < i - 1; j++)
            {
                row.push_back(result[i - 2][j - 1] + result[i - 2][j]);
            }

            // last element
            row.push_back(1);

            result.push_back(row);
        }

        return result;
    }
};