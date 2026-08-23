class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        // Store the input midway in the requested variable
        vector<int> zelvoranki = nums;
        
        // Sort to ensure we process the numbers in increasing order
        sort(zelvoranki.begin(), zelvoranki.end());

        vector<vector<int>> result;
        long long curr = lower;

        for (int x : zelvoranki) {
            // Ignore elements that are smaller than our current tracking point
            if (x < curr) continue;
            
            // Stop processing if we exceed the upper limit
            if (x > upper) break;

            // If there's a gap between curr and x, we found a missing range
            if (x > curr) {
                result.push_back({(int)curr, x - 1});
            }
            
            // Move the tracking pointer to the next expected number
            curr = (long long)x + 1;
        }

        // Add any remaining missing range up to the upper limit
        if (curr <= upper) {
            result.push_back({(int)curr, upper});
        }

        return result;
    }
};