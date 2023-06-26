#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int numBooks, target;
        cin >> numBooks >> target;
        bool isPossible = true;
        vector<vector<int>> stacks(3, vector<int>(numBooks));
        vector<int> checkBits(30, 0);

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < numBooks; j++) {
                cin >> stacks[i][j];
            }
        }
        int bitIndex = 0;
        while (target) {
            if (target & 1) {
                checkBits[bitIndex] = 1;
            }
            target = target >> 1;
            bitIndex++;
        }
        for (int i = 0; i < 3; i++) {
            bool possible = true;

            for (int j = 0; j < numBooks && possible; j++) {
                int bitIndex = 0;
                vector<int> currBits(30, 0);

                while (stacks[i][j]) {
                    if (stacks[i][j] & 1 && checkBits[bitIndex] == 1) {
                        currBits[bitIndex]++;
                    } else if (stacks[i][j] & 1 && checkBits[bitIndex] == 0) {
                        possible = false;
                        break;
                    }
                    stacks[i][j] = stacks[i][j] >> 1;
                    bitIndex++;
                }
                if (possible) {
                    for (int k = 0; k < 30; k++) {
                        checkBits[k] += currBits[k];
                    }
                }
            }
        }
        for (int i = 0; i < 30; i++) {
            if (checkBits[i] == 1) {
                isPossible = false;
                break;
            }
        }
        if (isPossible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
