class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        
        if (n % groupSize != 0) return false;

        vector<int> freq(1001, 0);

        for (int x : hand) {
            freq[x]++;
        }

        for (int i = 0; i <= 1000; i++) {
            while (freq[i] > 0) {
                // try to build a group starting from i
                for (int j = 0; j < groupSize; j++) {
                    int curr = i + j;

                    if (curr > 1000 || freq[curr] == 0)
                        return false;

                    freq[curr]--;
                }
            }
        }

        return true;
    }
};