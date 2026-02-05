#team

https://codeforces.com/group/1lvPqewYjC/contest/658324/problem/E

#old solution

[Open team.cpp](./team.cpp)

*new solution*

```#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int solved = 0;
    for (int i = 0;i < n;i++) {
        int p, v, t;
        cin >> p >> v >> t;
        if (p + v + t >= 2) {
            solved++;
        }
    }
    cout << solved;
    return 0;
}```

*notes*
- it wasn't nesecceray to make 3 arrays because we r going to pass by everyelement for one time only
- مكنش ليه لازمه نعمل ارراي واحنا هنعدي علي كل عنصر مره واحده 
