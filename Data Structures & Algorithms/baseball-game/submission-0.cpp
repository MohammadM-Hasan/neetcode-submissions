class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> s;

        for (string op : operations) {

            if (op == "+") {
                s.push_back(s.back() + s[s.size() - 2]);
            }
            else if (op == "D") {
                s.push_back(2 * s.back());
            }
            else if (op == "C") {
                s.pop_back();
            }
            else {
                s.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int x : s) sum += x;

        return sum;
    }
};