#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;cin >> n;
    int arr[99] = {0};
    for (int i = 0;i < n - 1;i++) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int min = abs(a - b);
    ////result = sum of arr[i]
    int result = 0;
    for (int i = 0;i <= min - 1;i++) {
        result += arr[i];
    }
        cout << result;
    return 0;
}
