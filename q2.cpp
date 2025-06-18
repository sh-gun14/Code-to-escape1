#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& a) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        int mid = (l + r) / 2;
        if (a[mid] > a[r]) l = mid + 1;
        else r = mid;
    }
    return a[l];
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << findMin(a) << endl;
    return 0;
}
