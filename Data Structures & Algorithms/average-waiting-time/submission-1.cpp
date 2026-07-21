class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long totalWaitingTime = 0;
        long long finishTime = customers[0][0]; // first customer arrive time;

        for(const vector<int>& customer : customers)
        {
            finishTime = max(finishTime, (long long)customer[0]);
            finishTime +=  customer[1];
            totalWaitingTime += finishTime - customer[0];
        }

        return (double)totalWaitingTime / customers.size();
    }
};