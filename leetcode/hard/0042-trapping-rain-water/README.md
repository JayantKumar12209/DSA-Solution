# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

 **Example 1:** 

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

 **Example 2:** 

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

 **Constraints:** 

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 27.1 MB (beats 30.42%)  
**Submitted:** 2026-10-22T17:38:49.304Z  

```cpp
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int water = 0;

        // for (int i = 0; i < n; i++) {
        //     int leftMax = 0, rightMax = 0;

        //     for (int j = 0; j <= i; j++) {
        //         leftMax = max(leftMax, height[j]);
        //     }

        //     for (int j = i; j < n; j++) {
        //         rightMax = max(rightMax, height[j]);
        //     }

        //     water += min(leftMax, rightMax) - height[i];
        // }
        vector<int>leftMax(n,0);
        vector<int>rightMax(n,0);
        int lMax =0, rMax = 0;
        for(int i=0; i<n; i++){
            lMax = max(lMax, height[i]);
            leftMax[i] = lMax;
        }
          for(int i=n-1; i>=0; i--){
            rMax = max(rMax, height[i]);
            rightMax[i] = rMax;
        } 

        for(int i=0; i<n; i++){
            water += min(rightMax[i], leftMax[i]) - height[i];
        }

        return water;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)