# C. Inversion
time limit pre test: 1.5 second  
memory limit per test: 65536 kilobytes  

對一個數列$S$來說，若$S$的第$i$項$S_i$與第$j$項$S_j$符合$S_i\gt S_j$，並且$i\lt j$的話，那麼我們說$(i,j)$是一個逆序數對。請問給定，總共有多少個逆序數對呢？

原題連結：[TIOJ[1080. 逆序數對]](https://tioj.ck.tp.edu.tw/problems/1080)

### Iuput
輸入檔可能包含多筆測試資料，每筆測試資料第一列會有一個正整數$n$，第二列有$n$個整數依序為數列$S$的每一項，以一個空白隔開。當$n=0$的時候表示輸入結束，你不必對這筆資料作處理，所有數字都可以用有號32-bits整數型態儲存。
- $1\le n \le 10^5$

### Output
對於每組測試資料請先輸出這是第幾個序列，然後是該序列的逆序數對的總數。

### Example
Input
```plain
5
1 2 3 4 5
5
1 2 3 5 4
0
```

Output
```plain
Case #1: 0
Case #2: 1
```