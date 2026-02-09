# Dungeon Equilibrium
https://codeforces.com/group/1lvPqewYjC/contest/658324/problem/U
# old code 
[Open Dungeon_Equilibrium.cpp](./Dungeon_Equilibrium.cpp)
# mistakes in my code 
-
   ```cpp
  int arr[100] = { 0 };
  ```
  i have made the size with 100 but we know array starts with index 0 so if we test the 100 number it will be out of range 
  so the correct size should be more than 100 
  -
  ```cpp
        for (int i = 0;i < n;i++) {
            if (arr[i] != i) {
                if (arr[i] > i) {
                    result += abs(arr[i] - i);
                }
                else if (arr[i] < i) {
                    result += arr[i];
                }
            }
        }
```
 here i put n and that is not the right way cause the frequency counts 0's also so we don't even see the last number or calculate it.



