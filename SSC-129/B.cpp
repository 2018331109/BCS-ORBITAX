#include<bits/stdc++.h>
using namespace std;

int main() {
    int _, k;
    cin >> _ >> k;

    vector<int> values;
    for (int i = 0; i < _; i++) {
        int x;
        cin >> x;
        values.push_back(x);
    }

    int result = INT_MAX;
    for (int x : values) {
        if (k % x == 0) {
            result = min(result, k / x);
        }
    }

    cout << result << endl;

    return 0;
}

