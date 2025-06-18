#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
    int n = arr.size();
    reverse(arr.begin() + m + 1, arr.end());
}
