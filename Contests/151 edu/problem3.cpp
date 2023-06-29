#include <iostream>

using namespace std;

bool check = false;

void solve(string& s, string& l, string& r, string& ans, int m, int indx)
{
    if (indx == m) {
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j < m && s[i] == ans[j]) {
                j++;
            }
        }
        if (j != m) {
            check = true;
        }
        return;
    }
    
    for (int i = l[indx] - '0'; i <= r[indx] - '0'; i++) {
        ans.push_back(i + '0');
        solve(s, l, r, ans, m, indx + 1);
        ans.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        int m;
        cin >> m;
        string l, r;
        cin >> l >> r;
        check = false;
        string ans;
        solve(s, l, r, ans, m, 0);
        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
