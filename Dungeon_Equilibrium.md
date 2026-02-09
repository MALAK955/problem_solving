# ⚔️ Dungeon Equilibrium
[Problem Link](https://codeforces.com/group/1lvPqewYjC/contest/658324/problem/U)

## 📄 Old Code
[Open Dungeon_Equilibrium.cpp](./Dungeon_Equilibrium.cpp)

## ❌ Mistakes in my code:

1. **Incorrect Array Size:**
   ```cpp
   int arr[100] = { 0 };
   ```
   The Issue: i set the size to 100 since the array is 0-indexed we won't reach the 100 and if the input is 100 then we will get Stack Corruption error.

   The Fix: we will put the size at least 101.

2. **Loop Boundary Logic:**
   ```cpp
   for (int i = 0; i < n; i++) { ... }
   ```
   The Issue: using i<n means the loop will stop at n-1 then the frequency of the last number will never be calculated.
   The Fix: to include the last one we can do (i<=n) or (i<n+1) both are fine.
   ## final code
   ```cpp
   #include <iostream>
   #include <stack>
   #include <vector>
   #include <cmath>
   using namespace std;
   int main() {
       int t;cin >> t;
       while (t--) {
           int n;cin >> n;
           int arr[101] = { 0 };
           int result = 0;
           vector<int>v(n);
           for (int i = 0;i < n;i++) {
               cin >> v[i];
               arr[v[i]]++;
           }
           for (int i = 0;i <= n;i++) {
               if (arr[i] != i) {
                   if (arr[i] > i) {
                       result += abs(arr[i] - i);
                   }
                   else if (arr[i] < i) {
                       result += arr[i];
                   }
               }
           }
           cout << result;
           cout << endl;
       }
       return 0;
   }
```


