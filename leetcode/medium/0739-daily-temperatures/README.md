# Daily Temperatures

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `temperatures` represents the daily temperatures, return  *an array*  `answer`  *such that*  `answer[i]`  *is the number of days you have to wait after the*  `ith`  *day to get a warmer temperature*. If there is no future day for which this is possible, keep `answer[i] == 0` instead.

 

Original
C++
 **Example 1:** 

```
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

```

 **Example 2:** 

```
Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

```

 **Example 3:** 

```
Input: temperatures = [30,60,90]
Output: [1,1,0]

```

 

 **Constraints:** 

- 1 <= temperatures.length <= 105
- 30 <= temperatures[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 26 ms (beats 39.34%)  
**Memory:** 107.3 MB (beats 45.51%)  
**Submitted:** 2026-11-10T14:29:17.463Z  

```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
          int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> s;
       for(int i=0; i<n; i++){
       while(!s.empty() && temperatures[i] > temperatures[s.top()]){
        int prevIndex = s.top();
        s.pop();
        ans[prevIndex] = i - prevIndex;
       }s.push(i);
       }
       return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/daily-temperatures/)