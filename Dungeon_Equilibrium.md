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



