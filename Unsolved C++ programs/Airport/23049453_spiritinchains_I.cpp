#include <bits/stdc++.h>

using namespace std;

int main() {
    priority_queue<int> a;
    vector<int> b;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        a.emplace(x);
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    int minearn = 0;
    int maxearn = 0;
    for (int i = 0; i < n; i++) {
        int amax = a.top();
        maxearn += amax;
        a.pop();
        if (--amax > 0) {
            a.emplace(amax);
        }
        int bmin = b[0];
        minearn += bmin;
        if (--bmin > 0) {
            b[0] = bmin;
        }
        else {
            b.erase(b.begin());
        }
    }
    cout << maxearn << ' ' << minearn << endl;
}
