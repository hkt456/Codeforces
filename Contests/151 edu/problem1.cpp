#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        
        if (x != 1) {
            cout << "YES" << endl << n << endl;
            while (n--) cout << 1 << " ";
            cout << endl;
            continue;
        }
        
        if (k == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        if (k == 2) {
            if (n & 1) {
                cout << "NO" << endl;
                continue;
            }
            else {
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++) cout << 2 << " ";
                cout << endl;
                continue;
            }
        }
        
        if (n < 2) {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        if (n % 2 == 0) {
            cout << n / 2 << endl;
            for (int i = 0; i < n / 2; i++) cout << 2 << " ";
            cout << endl;
        }
        else {
            cout << (n - 3) / 2 + 1 << endl;
            cout << 3 << " ";
            for (int i = 0; i < (n - 3) / 2; i++) cout << 2 << " ";
            cout << endl;
        }
    }
    
    return 0;
}
