# C. Minimum Limit of Balls in a Bag
time limit pre test: 1 second  
memory limit per test: 256 megabytes  

給予一長度為`n`的整數陣列`nums`，和一正整數`maxOperations`。`nums[i]`表示第 $i^{th}$ 個袋子裝多少個球。  
你可以執行以下操作至多`maxOperaions`次：
- 選取某個袋子，將球分到兩個新的袋子中，且新袋子中只能裝正整數之數量的球。  
    例如某袋中有5個球，你可以將球分成1和4或2和3等。

求經過操作後，最多球的那袋，球數最少的狀況是幾顆。

原題連結：[LeetCode[Minimum Limit of Balls in a Bag]](https://leetcode.com/problems/minimum-limit-of-balls-in-a-bag/description/)

### Input
每次輸入共兩行，第一行有`n`個整數為`nums[0]`~`nums[n-1]`，中間由空格隔開，第二行有一正整數`maxOperations`。
- $1 \le$ `n` $\le 10^5$
- $1 \le$ `maxOperations`, `nums[i]` $\le 10^9$

> [!NOTE]  
> 用getline解決不確定要輸入幾個整數的問題，得到一行字串後再將它拆成整數陣列。
> 用cin.ignore()解決換行問題。

> [!NOTE]  
> 將問題轉換成，若將每袋都分成某數以下，需要多少個袋子? 並在讓袋子數量符合規定下，找出某數最小為多少。 (使用二元搜尋法)

### Output
依各個輸入，輸出經過操作後，最多球的那袋，球數最少的狀況是幾顆。

### Examples
Input 1
```plain
9
2
2 4 8 2
2
```

Output 1
```plain
3
4
```

範例說明：  
- case 1  
    1. \[9\]挑選9分成6和3，變為\[6, 3\]。
    2. \[6, 3\]挑選6分成3和3，變為\[3, 3, 3\]。  
    可得到最多球的的袋子中有3顆球。
- case 2  
    1. \[2, 4, 8, 2\]挑選8分成6和2，變為\[2, 4, 6, 2, 2\]。
    2. \[2, 4, 6, 2, 2\]挑選6分成3和3，變為\[2, 4, 3, 3, 2, 2\]。
    可得到最多球的的袋子中有4顆球。