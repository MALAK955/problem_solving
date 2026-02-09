#include <iostream>
#include <stack>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        int arr[100] = { 0 };
        int result = 0;
        vector<int>v(n);
        for (int i = 0;i < n;i++) {
            cin >> v[i];
            arr[v[i]]++;
        }
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
        cout << result;
        cout << endl;
    }
    return 0;
}
