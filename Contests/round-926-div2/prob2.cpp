#include <iostream>

using namespace std;

int minimumCells(int n, int k) {
    // Check if k is achievable
    if (k > 4 * n - 2) {
        return -1; // Impossible to achieve
    }

    // Calculate the minimum number of cells needed for each diagonal type
    int minHorizontalCells = max(k, n - 1);
    int minVerticalCells = max(k, n - 1);
    int minDiagonalCells = max(k, (n + 1) / 2);

    // Choose the minimum between horizontal and vertical coloring
    int minCells = min(minHorizontalCells * n, minVerticalCells * n);

    // Check if diagonal coloring is more efficient, considering both sides
    if (minCells > minDiagonalCells * (n - 1)) {
        minCells = minDiagonalCells * (n - 1);
    }

    return minCells;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int result = minimumCells(n, k);

        if (result == -1) {
            cout << "Impossible" << endl;
        } else {
            cout << result << endl;
        }
    }

    return 0;
}

