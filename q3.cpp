#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int>& a) {
    int l = 0, r = a.size() - 1;
    while (l < r) {
        int mid = (l + r) / 2;
        if (a[mid] < a[mid + 1]) l = mid + 1;
        else r = mid;
    }
    return l;
}

int binarySearch(vector<int>& a, int l, int r, int x, bool asc) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) return mid;
        if (asc) {
            if (a[mid] < x) l = mid + 1;
            else r = mid - 1;
        } else {
            if (a[mid] > x) l = mid + 1;
            else r = mid - 1;
        }
    }
    return -1;
}

int bitonicSearch(vector<int>& a, int x) {
    int peak = findPeak(a);
    int left = binarySearch(a, 0, peak, x, true);
    if (left != -1) return left;
    return binarySearch(a, peak + 1, a.size() - 1, x, false);
}

int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << bitonicSearch(a, x) << endl;
    return 0;
}
