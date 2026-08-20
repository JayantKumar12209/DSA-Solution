# ASMBLY

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### School Assembly

During the assembly, a teacher lines up $N$ students in a line in front of her. She can see the first student and all the students taller than the students before them (i.e a teacher can see the student $i$ if $h_i \gt h_j$ for all $j$,$j \le i$). How many students will the teacher be able to see?

### Input Format
- The first line will have 1 integer $N$.
- The second line will contain the heights of the students which would be integers in the order of them getting farther from the teacher. (will be separated by a space)
### Output Format

Output a single integer which is the amount of students the teacher will be able to see.

### Constraints
- $1 \leq N \leq 10^5$
- $2 \leq h_i \leq 10^9$
### Subtasks
- 30 points : $1 \leq N \leq 1000$
- 70 points : $1 \leq N \leq 10^5$
### Sample 1:
Input
Output

```
9
1 2 3 4 5 6 7 8 9 

```

```
9 
```

### Explanation:

The teacher will be able to see all the students.

### Sample 2:
Input
Output

```
4
1 2 4 3

```

```
3
```

### Explanation:

The teacher will not be able to see the 4th student as the height of the 3rd student has height higher than him.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T09:31:22.731Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    long long n;
    cin>>n;
    
    vector<long long>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    long long cnt =0;
    int maxH = 0;
    
    for(int i=0; i<n; i++){
        if(a[i] > maxH){ 
            cnt++;
            maxH = a[i];
        }
    }
    cout<<cnt<<"\n";
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ASMBLY)