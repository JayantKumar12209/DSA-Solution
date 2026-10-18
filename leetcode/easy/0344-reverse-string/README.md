# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 10.16%)  
**Memory:** 27.3 MB (beats 51.63%)  
**Submitted:** 2026-10-18T10:57:14.035Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0, e= s.size()-1;
        while(st<e){
            swap(s[st], s[e]);
            st++;
            e--;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)