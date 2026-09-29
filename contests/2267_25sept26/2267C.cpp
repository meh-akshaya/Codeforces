#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> p;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                p.push_back(i);

                while (x % i == 0) {
                    x /= i;
                }
            }
        }
        if (x > 1) {
            p.push_back(x);
        }
        long long ans = 0;
        for (auto prime : p) {
            long long sum = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] % prime == 0) {
                    sum += a[i];
                }
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }
}