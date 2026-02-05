#include <iostream>
using namespace std;
int main() {
    bool p[999];
    bool v[999];
    bool t[999];
    int sum[999];
    int n;cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> p[i] >> v[i] >> t[i];
        sum[i] = p[i] + v[i] + t[i];
    }
    int solved = 0;
    for (int i = 0;i < n;i++) {
        if (sum[i] == 2 || sum[i] == 3) {
            solved++;
        }
    }
    cout << solved;
    return 0;
}
