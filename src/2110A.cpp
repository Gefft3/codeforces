#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        sort(a.begin(), a.end());

        int fe = -1, le = -1;
        int fo = -1, lo = -1;
        
        for (int i = 0; i < n; ++i) {
            if ((a[i] & 1) == 0) {
                fe = (fe < 0 ? i : fe);
                le = i;
            } else {
                fo = (fo < 0 ? i : fo);
                lo = i;
            }
        }

        int best = 0;
        if (fe >= 0) best = max(best, le - fe + 1);
        if (fo >= 0) best = max(best, lo - fo + 1);
        cout << (n - best) << '\n';
    }
    return 0;
}
