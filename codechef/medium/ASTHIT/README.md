# ASTHIT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Asteroid Hit

Dr. Strange asks for your help and we don't have time for a background chit-chat!

$N$ asteroids of different sizes are moving on a line, with the $i$-th asteroid being in the $i$-th coordinate. For each asteroid you know its direction (left or right), and its size. In this universe, all asteroids are moving with the same speed.

When two asteroids hit, there are two possible scenarios:

- If they are the same size - they are both destroyed.
- Otherwise, the smaller one is destroyed and the bigger one gains bonus size. The size of the bigger asteroid increases by the size of the smaller asteroid.

Help Dr. Strange determine which of the asteroids will survive (or if all of them will be destroyed).

### Input Format
- First line will contain $T$, the number of test cases. Then the test cases follow - each test case has $N+1$ lines.
- The first line of input of each test case contains a single integer $N$.
- Next $N$ lines contain two space-separated integers: $dir_i$ and $a_i$ - representing the direction ($0$ if left, $1$ if right) and the size of the asteroid.
### Output Format

For each test case, first output in a single line the number of survived asteroids - $x$. In the next line, output $x$ integers representing the indices of the survived asteroids $\textbf{sorted by increasing order}$.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 10^5$
- Sum of $N$ over all test cases does not exceed $2\cdot 10^5$
- $dir_i \in \{0, 1\}$
- $1 \leq a_i \leq 10^9$
### Subtasks
- 10 points : $dir_i = 1$ for all $1 \leq i \leq N$
- 40 points : Sum of $N$ over all test cases does not exceed 2000
- 50 points : original constraints
### Sample 1:
Input
Output

```
2
4
1 1
0 1
1 4
0 4
4
1 5
1 1
0 2
1 1
```

```
0
2
1 4
```

### Explanation:

In the first test case, the first two asteroids destroy each other, as they are the same size. Same thing happens to third and fourth asteroids - so all of them are destroyed and we are left with $0$ asteroids.

In the second test case, the second and third asteroid collide and the bigger is third, so it now becomes larger and its size is $1+2=3$. Next, the first asteroid collides with the asteroid of size $3$ and wins. We are left with the first asteroid, whose size is $5+3=8$ now, and the fourth asteroid with size $1$.

### Sample 2:
Input
Output

```
1
4
1 9
1 2
1 3
0 5
```

```
1
4
```

### Explanation:

The third asteroid hits the fourth and loses, so the fourth now has the size $5+3=8$. Then, it hits the second asteroid and wins. So its size now is $8+2 = 10$. Finally, the first asteroid is being destroyed by the fourth (whose size now is $10+9 = 19$) and the fourth asteroid remains the only one.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T11:15:38.461Z  

```c_cpp
#include <bits/stdc++.h>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    vector<int> dir(n);
    vector<long long>size(n);
    vector<int>st;
    
    for(int i=0; i<n; i++){
        cin>>dir[i]>>size[i];
        bool alive = true;
        
        while(!st.empty() && dir[st.back()] == 1 && dir[i] == 0){
            int top = st.back();
            
            if(size[top]==size[i]){
                st.pop_back();
                alive = false;
                break;
            }else if(size[top]<size[i]){
                size[i]+=size[top];
                st.pop_back();
                
            }else{ size[top]+=size[i];
              alive = false;
              break;}
            
        }
        if(alive) st.push_back(i);
    }
    //output
    cout<<st.size()<<"\n";
    for(int i=0; i<st.size(); i++){
        cout<<st[i] + 1<<(i== st.size()-1 ? "": " ");
    }cout<<"\n";
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) solve();
	    
	return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/ASTHIT)