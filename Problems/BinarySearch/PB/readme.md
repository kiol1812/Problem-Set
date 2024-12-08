# B. Prime Subtraction Operation
time limit pre test: 1 second  
memory limit per test: 256 megabytes  

給予一長度為`n`的整數陣列`nums`。請輸出經過操作後，此陣列是否為嚴格遞增排序。  
你可以執行以下操作：
- 選取一尚未被選取過的索引`i`，將`nums[i]`減去一嚴格小於`nums[i]`的質數。

原題連結：[LeetCode[Prime Subtraction Operation]](https://leetcode.com/problems/prime-subtraction-operation/)

### Input
每次輸入共一行，每行有`n`個整數為`nums[0]`~`nums[n-1]`，中間由空格隔開。
- $1 \le$ `n` $\le 1000$
- $1 \le$ `nums[i]` $\le 1000$

> [!NOTE]  
> 用getline解決不確定要輸入幾個整數的問題，得到一行字串後再將它拆成整數陣列。

### Output
依各個輸入陣列，輸出此陣列經過操作後是否可為嚴格遞增陣列，若可以則輸出true，否則輸出false。

### Examples
Input 1
```plain
4 9 6 10
6 8 11 12
5 8 3
```

Output 1
```plain
true
true
false
```

範例說明：  
- case 1  
    \[4, 9, 6, 10\]可挑選第一項元素減去3，變為\[1, 9, 6, 10\]。再挑選第二項元素減去7，變為\[1, 2, 6, 10\]，而此結果為嚴格遞增陣列。
- case 2  
    \[6, 8, 11, 12\]已經是嚴格遞增陣列了。
- case 3  
    \[5, 8, 3\]挑選第一項減去3，變為\[2, 8, 3\]，挑選第二項減去5，變為\[2, 3, 3\]，可發現第三項與第二項的數值是相同的，不符合嚴格遞增。
