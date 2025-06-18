#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size(), m = mat[0].size();
    int l = 0, r = n * m - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        int val = mat[mid / m][mid % m];
        if (val == target) return true;
        else if (val < target) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

int main() {
    int n, m, target;
    cin >> n >> m >> target;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> mat[i][j];
    cout << (searchMatrix(mat, target) ? 1 : 0) << endl;
    return 0;
}
