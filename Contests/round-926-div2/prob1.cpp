#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <deque>
#include <complex>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) // Corrected loop to input values into the vector
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        long long sum = 0;
        for (int i = 1; i < n; i++) { // Loop through array indices
            sum += arr[i] - arr[i - 1]; // Calculate difference between consecutive elements
        }
        cout << sum << endl;
    }
}
