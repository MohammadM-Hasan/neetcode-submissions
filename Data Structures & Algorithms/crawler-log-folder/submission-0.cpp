class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;

        for(string operation : logs)
        {
            if(operation == "./")
                continue;
            
            if(operation == "../")
            {
                if(depth > 0)
                    depth--;
            }
            else
            {
                depth++;
            }
        }

        return depth;
    }
};