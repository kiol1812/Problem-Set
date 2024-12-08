# A. Search in Rotated Sorted Array
time limit pre test: 1 second  
memory limit per test: 256 megabytes  

給予一遞增的陣列，且此陣列經過未知數字的旋轉。如原陣列為\[0,1,2,4,5,6,7\]，由索引3旋轉後，陣列變為\[4,5,6,7,0,1,2\]。給予這經過處理後的陣列`nums`和一目標整數`target`，請輸出目標整數在陣列中的索引值，若陣列中沒有目標整數，則回傳-1。  
請撰寫時間複雜度為 $O(\log{n})$ 的程式。

原題連結：[LeetCode[Search in Rotated Sorted Array]](https://leetcode.com/problems/search-in-rotated-sorted-array/description/)

### Input
每次輸入共兩行，第一行有`n`個整數為經過處理後的陣列`nums`，中間由空格隔開，而第二行則為一正整數`target`。以上輸入直到EOF。
- $1 \le$ `n` $\le 5000$
- $-10^4 \le$ `nums[i]` $\le 10^4$
- $-10^4 \le$ `target` $\le 10^4$
- `nums`中所有數值都不重複。
- `nums`為一遞增的陣列，且可能經過旋轉。

> [!NOTE]  
> 用getline解決不確定要輸入幾個整數的問題，得到一行字串後再將它拆成整數陣列。  
> 用cin.ignore()解決換行問題。

### Output
針對各個輸入，輸出目標整數在陣列中的索引值(0-indexed)，若不在陣列中，則回傳-1。

### Examples
Input
```plain
4 5 6 7 0 1 2
0
4 5 6 7 0 1 2
3
1
0
```

Output
```plain
4
-1
-1
```
