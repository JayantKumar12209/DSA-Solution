class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>arr;
        for(int right=0; right<nums.size(); right++){
            arr[nums[right]]++;
            while(arr[nums[right]]>1) return true;
        }return false;
    }
};