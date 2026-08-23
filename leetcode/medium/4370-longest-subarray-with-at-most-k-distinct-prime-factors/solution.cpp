class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        unordered_map<int, int> prime_count; // Tracks frequency of prime factors in the current window
        int distinct_primes = 0;
        int max_len = 0;
        int left = 0;

        // Cache to avoid recalculating prime factors for identical numbers
        unordered_map<int, vector<int>> prime_cache;

        // Lambda helper to find distinct prime factors
        auto getPrimeFactors = [&](int n) -> const vector<int>& {
            if (prime_cache.find(n) != prime_cache.end()) {
                return prime_cache[n];
            }
            
            vector<int> factors;
            int temp = n;
            for (int i = 2; i * i <= temp; ++i) {
                if (temp % i == 0) {
                    factors.push_back(i);
                    // Divide out the current prime factor completely
                    while (temp % i == 0) {
                        temp /= i;
                    }
                }
            }
            // If any prime factor greater than sqrt(n) remains
            if (temp > 1) {
                factors.push_back(temp);
            }
            
            prime_cache[n] = factors;
            return prime_cache[n];
        };

        // Sliding window logic
        for (int right = 0; right < nums.size(); ++right) {
            
            // 1. Expand the window by adding nums[right]
            const vector<int>& factors = getPrimeFactors(nums[right]);
            for (int p : factors) {
                if (prime_count[p] == 0) {
                    distinct_primes++;
                }
                prime_count[p]++;
            }

            // 2. Shrink the window from the left if we exceed the 'k' limit
            while (distinct_primes > k) {
                const vector<int>& left_factors = getPrimeFactors(nums[left]);
                for (int p : left_factors) {
                    prime_count[p]--;
                    if (prime_count[p] == 0) {
                        distinct_primes--;
                    }
                }
                left++;
            }

            // 3. Record the maximum valid window size
            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};