# Monotonic_stack
```cpp   
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <stack>
#include <map>
#include <cmath>
#define el endl
#define ll long long
#define hunter ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
    hunter;
    vector<int> v = { 13,8,1,5,9,4,12 };
    vector<int>ans(7, -1);
    stack<int>monotonic;
    for (int i = 6;i >= 0;i--) {
        while (!monotonic.empty()&& v[i] >= monotonic.top()) {
            monotonic.pop();
        }
        if (!monotonic.empty()) {
            ans[i] = monotonic.top();
        }
        monotonic.push(v[i]);
    }
    for (auto it : ans) cout << it << " ";
    return 0;
}

```
