#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& a, int target) {
    int l = 0, r = a.size() - 1, ans = a.size();
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == target) return mid;
        else if (a[mid] < target) l = mid + 1;
        else {
            ans = mid;
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << searchInsert(a, target) << endl;
    return 0;
}
