# Monotnoic_stack
``cpp
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
    ```
