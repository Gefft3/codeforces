#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll mod_pos(ll x, ll m) {
    x %= m;
    return x < 0 ? x + m : x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll w, h, a, b;
        cin >> w >> h >> a >> b;

        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll dx1 = mod_pos(x1, a), dx2 = mod_pos(x2, a);
        ll dy1 = mod_pos(y1, b), dy2 = mod_pos(y2, b);

        bool can = false;

        if (dx1 == dx2) {
            if (llabs(x1 - x2) >= a  || dy1 == dy2)         
                can = true;
        }

        
        if (!can && dy1 == dy2) {
            if (llabs(y1 - y2) >= b  || dx1 == dx2)         
                can = true;
        }

        cout << (can ? "Yes\n" : "No\n");
    }
    return 0;
}
