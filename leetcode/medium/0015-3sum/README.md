# 3Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

 

 **Example 1:** 

```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

```

 **Example 2:** 

```
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

```

 **Example 3:** 

```
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

```

 

 **Constraints:** 

- 3 <= nums.length <= 3000
- -105 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 52 ms (beats 32.44%)  
**Memory:** 28.9 MB (beats 91.41%)  
**Submitted:** 2026-10-21T16:14:33.602Z  

```cpp
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        // for(int i=0; i<nums.size(); i++){
        //     //if(nums[i] == nums[i+1]) i++;
        //     for(int j=i+1; j<nums.size(); j++){
        //         //if(nums[j] == nums[j+1]) j++;
        //         for(int k=j+1; k<nums.size(); k++){
                    
        //           if(i != j && j != k && i != k){
        //             if(nums[i] + nums[j] + nums[k] == 0){ ans.push_back({nums[i], nums[j], nums[k]});
        //             break;
        //             }
        //         }
        //         }
        //     }
        // }return ans;
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int s=i+1, e=nums.size()-1;
            while(s<e){
                int sum = nums[i] + nums[s] + nums[e];
                if(sum < 0) s++;
                else if(sum>0) e--;
                else{ ans.push_back({nums[i], nums[s], nums[e]});
                while(s<e && nums[s] == nums[s+1]) s++;
                while( s<e && nums[e] == nums[e-1]) e--;
                s++;
                e--;
            }
            }

        }return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/3sum/)