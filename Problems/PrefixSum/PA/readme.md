# A. Minimum Size Subarray Sum
time limit pre test: 1 second  
memory limit per test: 256 megabytes  

給予一整數陣列`nums`和一正整數`target`，請求出當子陣列總和大於或等於`target`時，最短子陣列的長度為多少，如果沒有符合的子陣列，則輸出 $0$ 。 子陣列必須連續且非空。

原題連結：[LeetCode[minimum size subarray sum]](https://leetcode.com/problems/minimum-size-subarray-sum/description/)

### Input
輸入共兩行，第一行有一正整數`target`，而第二行則為隸屬於`nums`下的所有元素，中間由空格隔開。
- $1 \le$ target $\le 10^9$
- $1 \le$ nums.length $\le 10^5$
- $1 \le$ nums\[ i \] $\le 10^4$

> [!NOTE]  
> 用getline解決不確定要輸入幾個整數的問題，得到一行字串後再將它拆成整數陣列。

### Output
輸出總和大於或等於`target`的子陣列長度，若沒有則輸出 $0$ 。

### Examples
Input 1
```plain
7
2 3 1 2 4 3
```

Output 1
```plain
2
```

Input 2
```plain
4
1 4 4
```

Output 2
```plain
1
```