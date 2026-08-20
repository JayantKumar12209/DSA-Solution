# Contains Duplicate

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return `true` if any value appears  **at least twice**  in the array, and return `false` if every element is distinct.

 

 **Example 1:** 

 **Input:**  nums = [1,2,3,1]

 **Output:**  true

 **Explanation:** 

The element 1 occurs at the indices 0 and 3.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  false

 **Explanation:** 

All elements are distinct.

 **Example 3:** 

 **Input:**  nums = [1,1,1,3,3,4,3,2,4,2]

 **Output:**  true

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 77 ms (beats 30.91%)  
**Memory:** 111.4 MB (beats 25.03%)  
**Submitted:** 2026-08-20T11:31:39.089Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate/)