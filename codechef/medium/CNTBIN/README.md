# CNTBIN

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### 0xxx1

You are given a binary string $S$ of size $N$. A string is called  **good**  if

- The first character of the string is $0$.
- The last character of the string is $1$.

Count the number of sub-strings in $S$ which are  **good**. Since the answer might be a large number, print it modulo $10^{9} + 7$.

### Input Format
- First line will contain $T$, number of testcases. Then the testcases follow.
- The first line of each test case contains a single integer $N$.
- The second line of each test case contains a single string $S$.
### Output Format

For each testcase, print the count of good sub-strings modulo $10^{9} + 7$.

### Constraints
- $1 \leq T \leq 10$
- $2 \leq N \leq 10^5$
- Each character of string $S$ is either $0$ or $1$.
### Subtasks
- 30 points : $1 \leq N \leq 100$
- 70 points : $1 \leq N \leq 10^5$
### Sample 1:
Input
Output

```
2
5
10010
6
010010
```

```
2
4
```

### Explanation:

 **Test case 1** : Following substrings are good :

- 10010
- 10010

 **Test case 2** : Following substrings are good :

- 010010
- 010010
- 010010
- 010010

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T07:22:51.517Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
    
   while(t--){
    long long n;
    cin>>n;
    
    string s;
    cin>>s;
    
    long long zeros = 0;
    long long ans = 0;
    
    for(char ch: s){
        if(ch == '0') zeros++;//count zeros in string
        else ans = (ans + zeros) % ( 1000000007); 
    }
   
   cout<<ans<<"\n";
    
   }return 0;
   
   }

```

---

[View on CodeChef](https://www.codechef.com/problems/CNTBIN)