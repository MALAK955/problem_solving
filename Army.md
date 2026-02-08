# Army
https://codeforces.com/group/1lvPqewYjC/contest/658324/problem/H
# old code 
[Open Army.cpp](./Army.cpp)
# new code
```cpp
#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;cin >> n;
    int arr[105] = {0};
    for (int i = 0;i < n - 1;i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int min = a - b;
    ////result = sum of arr[i]
    int result = 0;
    for (int i = a - 1;i < b - 1;i++) {
        result += arr[i];
    }
        cout << result;
    return 0;
}
```
# notes 
1- first i always start from  rank 1 to the exact rank vasya want and that's not correct he can start with any rank 

ف الاول مكنش ينفع ابدا من رانك 1 لان فاسيا ممكن يبدا من اي رانك عادي 
