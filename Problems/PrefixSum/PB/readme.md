# B. Subarray Sum Equals K
time limit pre test: 1 second  
memory limit per test: 256 megabytes  

給予一整數陣列`nums`和一整數`k`，請求出有多少個子陣列的總和等於`k`，其中子陣列必須連續且非空。

原題連結：[LeetCode[subarray sum equals k]](https://leetcode.com/problems/subarray-sum-equals-k/description/)

### Input
輸入共兩行，第一行有一整數`k`，而第二行則為隸屬於`nums`下的所有元素，中間由空格隔開。
- $-10^7 \le$ k $\le 10^7$
- $1 \le$ nums.length $\le 2*10^4$
- $-1000 \le$ nums\[ i \] $\le 1000$

> [!NOTE]  
> 用getline解決不確定要輸入幾個整數的問題，得到一行字串後再將它拆成整數陣列。  
> 注意`nums`中的數值並非都為正數，prefix不會只一直遞增，所以使用hash table幫忙紀錄個階段prefix的頻率，以協助解題。

### Output
輸出總和等於`k`的子陣列數量。

### Examples
Input 1
```plain
2
1 1 1
```

Output 1
```plain
2
```

Input 2
```plain
3
1 2 3
```

Output 2
```plian
2
```
