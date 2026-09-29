#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefix[i + 1] = prefix[i] + a[i];
        }
        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long totalSum = prefix[n];
            long long rangeSum = prefix[r] - prefix[l - 1];
            long long length = r - l + 1;
            long long newSum = totalSum - rangeSum + length * k;
            if (newSum % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}