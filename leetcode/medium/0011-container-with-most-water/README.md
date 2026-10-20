# Container With Most Water

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return  *the maximum amount of water a container can store*.

 **Notice**  that you may not slant the container.

 

 **Example 1:** 

```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

```

 **Example 2:** 

```
Input: height = [1,1]
Output: 1

```

 

 **Constraints:** 

- n == height.length
- 2 <= n <= 105
- 0 <= height[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 45.65%)  
**Memory:** 62.7 MB (beats 96.50%)  
**Submitted:** 2026-10-20T17:00:42.507Z  

```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, w=0, maxC = 0, s=0, e=height.size()-1;
        while(s<e){
            l = min(height[s], height[e]);
            w = e - s;
            if(height[s]<=height[e]){
               maxC = max(maxC, l*w);
               s++;
            }
            else{
               maxC = max(maxC, l*w);
               e--; 
            } 
        }
        
       return maxC;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/container-with-most-water/)