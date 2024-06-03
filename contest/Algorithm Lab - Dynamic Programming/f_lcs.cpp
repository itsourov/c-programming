#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
string s1, s2;
int dp[3030][3030];

int rec(int idx1, int idx2) {
    if (idx1 >= s1.size())
        return 0;
    if (idx2 >= s2.size())
        return 0;

    if (dp[idx1][idx2] != -1) {
        return dp[idx1][idx2];
    }
    int ans = 0;
    if (s1[idx1] == s2[idx2]) {
        ans = rec(idx1 + 1, idx2 + 1) + 1;
    } else {
        ans = max(rec(idx1 + 1, idx2), rec(idx1, idx2 + 1));
    }

    return dp[idx1][idx2] = ans;
}

void printString(int i, int j) {
    if (i >= s1.size() || j >= s2.size() || dp[i][j] < 1) {
        return;
    }
    if (s1[i] == s2[j]) {
        cout << s1[i];
        printString(i + 1, j + 1);
    } else {
        if (j + 1 < s2.size() && dp[i][j + 1] >= dp[i + 1][j]) {
            printString(i, j + 1);
        } else if (i + 1 < s1.size()) {
            printString(i + 1, j);
        }
    }
}

void solve() {
    
    while (getline(cin, s1) && getline(cin, s2)) {
        if (s1.empty() && s2.empty()) {
            return;
        }

        for (int i = 0; i < 3030; i++) {
            for (int j = 0; j < 3030; j++) {
                dp[i][j] = -1;
            }
        }

        int mx = rec(0, 0);

        for (int i = 0; i < s1.size(); i++) {
            for (int j = 0; j < s2.size(); j++) {
                if (dp[i][j] == mx) {
                    printString(i, j);
                    cout << endl;
                    return;
                }
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
