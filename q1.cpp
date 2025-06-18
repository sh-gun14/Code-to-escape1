#include <bits/stdc++.h>
using namespace std;


int countOccurrences(vector<int>& a, int target) {
    int low = lower_bound(a.begin(), a.end(), target) - a.begin();
    int high = upper_bound(a.begin(), a.end(), target) - a.begin();
    return high - low;
}

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    cout << countOccurrences(a, target) << endl;
    return 0;
}
