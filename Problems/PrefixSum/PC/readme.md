# C. Count the Hidden Sequences
time limit pre test: 1 second  
memory limit per test: 256 megabytes  

給予一陣列`differences`表示一未知陣列的差，舉例來說若有一位知陣列為\[ 3, 4, 1, 5 \]，那麼它的`differences`就會是 \[ 1, -3, 4 \]。除了給予一陣列外，還會有兩個整數`lower`和`upper`，此兩整數表示一閉區間(inclusive range, \[lower, upper\])，未知的陣列中每個元素都必須在此區間內。請求出有幾種未知的陣列。

原題連結：[LeetCode[count the hidden sequences]](https://leetcode.com/problems/count-the-hidden-sequences/description/)

### Input
輸入共兩行，第一行有兩整數`lower`和`upper`，而第二行則為隸屬於`differeences`下的所有元素，中間由空格隔開。
- $-10^5 \le$ lower $\le$ upper $\le 10^5$
- $-10^5 \le$ differences\[ i \] $\le 10^5$
- $1 \le$ differences.length $\le 10^5$

> [!NOTE]  
> 注意prefix過程中可能會overflow。

### Output
輸出共有幾種未知陣列。

### Examples
Input 1
```plain
1 6
1 -3 4
```

Output 1
```plain
2
```

Input 2
```plain
-4 5
3 -4 5 1 -2
```

Output 2
```plian
4
```
