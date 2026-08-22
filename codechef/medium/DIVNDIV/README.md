# DIVNDIV

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Divisible and not divisible

In order to beat the evil monster, you need to answer $T$ of its queries. In each query, the monster gives you 3 positive integers $X$, $Y$ and $Z$. For each of the monsters query you need to find the smallest positive integer $K$ such that:

- $K$ is strictly greater than $X$
- $K$ is divisible by $Y$
- $K$ is not divisible by $Z$

Or determine that there is no such $K$

### Input Format
- The first line contains $T$ - number of queries. Then the queries follow.
- The first and only line of each query contains three space-separated positive integers $X$, $Y$ and $Z$
### Output Format

For each query output the smallest positive integer $K$, described as in the statement.

If no such $K$ exists, output -1.

### Constraints
- $1 \leq T \leq 500$
- $1 \leq X, Y, Z \leq 10^{18}$
### Subtasks
- 20 points : $1 \leq X, Y, Z \leq 1000$
- 60 points : $1 \leq X, Y, Z \leq 10^9$
- 20 points : original constraints
### Sample 1:
Input
Output

```
3
5 2 3
4 2 3
10 7 1
```

```
8
8
-1

```

### Explanation:

In the first query:

- $6$ is divisible by $2$, but it is also divisible by $3$ - so it's not an answer
- $7$ is not divisible by $2$ - so it’s not an answer
- $8$ is divisible by $2$ and it is not divisible by $3$ - so it is the answer

In the second query: The trick here is to see that $4$ is divisible by $2$ and not divisible by $3$. However, $4$ is not strictly greater than $X = 4$ - so it’s not an answer. The answer is the same as in the first query - $8$.

In the third query: Every positive integer number is divisible by $1$, so the answer surely doesn’t exist - therefore we output $-1$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-22T15:19:06.046Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long x,y,z;
       cin>>x>>y>>z;
       
       if(y%z == 0){
           cout<<-1<<"\n";
           return;
       }
          long long k = (x/y + 1)*y;
       while(k%z == 0){
          k+=y;
          }cout<<k<<"\n";
}
int main() {
	// your code goes here
   int t;
   cin>>t;
   
   while(t--){
        solve();
       
    
   }return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DIVNDIV)