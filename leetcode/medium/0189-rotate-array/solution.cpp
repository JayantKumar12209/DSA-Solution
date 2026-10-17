class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==0) return;
        vector<int> temp(n,0);
        for(int i=0; i<n; i++){
         temp[(i+k) % n] = nums[i];
        } nums = temp;
    }
};