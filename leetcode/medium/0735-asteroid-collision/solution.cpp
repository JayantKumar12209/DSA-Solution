class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st; // Using vector directly as a stack

        for (int ast : asteroids) {
            bool destroyed = false;

            // Collision condition: Top moves RIGHT (> 0) and current moves LEFT (< 0)
            while (!st.empty() && st.back() > 0 && ast < 0) {
                if (st.back() < -ast) {
                    st.pop_back(); // Stack top is smaller and destroyed; loop continues
                } else if (st.back() == -ast) {
                    st.pop_back(); // Both destroyed
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // Current asteroid is smaller and destroyed
                    break;
                }
            }

            // If current asteroid was not destroyed in a collision, keep it
            if (!destroyed) {
                st.push_back(ast);
            }
        }

        return st;

    }
};