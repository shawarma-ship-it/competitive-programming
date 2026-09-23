#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define all(x) (x).begin(), (x).end()

void solve() {

    // per-test-case logic
int w; cin >> w;
    cout << ((w % 2 == 0 && w > 2) ? "YES" : "NO") << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // delete this line for single-test problems
    while (t--) solve();
    return 0;
}
