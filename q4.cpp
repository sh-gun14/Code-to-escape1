#include <bits/stdc++.h>
using namespace std;

bool isEnough(vector<int>& a, int h, int wood) {
    long long sum = 0;
    for (int height : a) {
        if (height > h) sum += (height - h);
    }
    return sum >= wood;
}

int maxSawHeight(vector<int>& a, int wood) {
    int l = 0, r = *max_element(a.begin(), a.end()), ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (isEnough(a, mid, wood)) {
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    return ans;
}

int main() {
    int n, wood; cin >> n >> wood;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << maxSawHeight(a, wood) << endl;
    return 0;
}
