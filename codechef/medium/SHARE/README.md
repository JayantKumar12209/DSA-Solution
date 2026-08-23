# SHARE

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### RestroPay

Tanny and Purgi are two very good friends. They went to a nice restaurant for some good dinner after a long taxing week. Tanny has n banknotes of value $a_1,a_2,a_3,a_4,......,a_n$ dollars. Similarly Purgi has m banknotes of values $b_1,b_2,b_3,b_4,........,b_m$ dollars.

Their bill came out to be $C$ dollars. Is it possible for them to pay the bill if both of them can just pay with exactly 1 banknote?

### Input Format
- The first line will have 3 integers $n,m,c$ separated by a space.
- The second and third line will contain the values of the banknotes Tanny and Purgi (separated by a space) respectively.
### Output Format

Output $YES$ if it is possible to pay the bill using just 2 banknotes (one from Purgi and one from Tanny). Else output $NO$.

### Constraints
- $1 \leq n \leq 10^5$
- $1 \leq m \leq 10^5$
- $1 \leq c \leq 2*10^9$
- $0 \leq a_i,b_i \leq 10^9$
### Subtasks
- 30 points : $1 \leq n,m \leq 1000$
- 70 points : $1 \leq n,m \leq 10^5$
### Sample 1:
Input
Output

```
4 5 34
1 2 3 4
12 43 23 33 44

```

```
YES 
```

### Explanation:

If Tanny pays a 1 dollar banknote and Purgi pays the 33 dollar banknote, they can pay the bill of 34 dollars.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T15:59:44.859Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long n, m, c;
	cin>>n>>m>>c;
	
	vector<long long>a(n);
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	vector<long long>b(m);
	for(int i=0; i<n; i++){
	    cin>>b[i];
	}
	
	for(int i=0; i<n; i++){
	    for(int j=0; j<m; j++){
	        if(a[i] +  b[j] == c){ cout<<"YES"<<"\n";
	            break;
	        }
	    }
	}cout<<"NO"<<"\n";
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SHARE)