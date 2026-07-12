class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int asteroid : asteroids) {
            bool survived = true;

            // Collision is possible only if:
            // stack top is moving right and current asteroid is moving left.
            while (!st.empty() && st.top() > 0 && asteroid < 0) {

                if (st.top() < -asteroid) {
                    // Stack asteroid is smaller, so it explodes.
                    st.pop();
                }
                else if (st.top() == -asteroid) {
                    // Both asteroids explode.
                    st.pop();
                    survived = false;
                    break;
                }
                else {
                    // Current asteroid is smaller, so it explodes.
                    survived = false;
                    break;
                }
            }

            if (survived) {
                st.push(asteroid);
            }
        }

        vector<int> answer(st.size());

        for (int i = st.size() - 1; i >= 0; i--) {
            answer[i] = st.top();
            st.pop();
        }

        return answer;
    }
};