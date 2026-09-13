#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if (k < n || k > 2 * n - 1) {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> V(n, vector<int>(n));

        int p = 1;
        int same = 2 * n - k;

        for (int i = 0; i < same; i++) {
            V[i][i] = p++;
        }

        for (int i = same; i < n; i++) {
            V[i][0] = p++;
        }

        for (int j = same; j < n; j++) {
            V[0][j] = p++;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (V[i][j] == 0) {
                    V[i][j] = p++;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << V[i][j] << " ";
            }
            cout << endl;
        }
    }
}