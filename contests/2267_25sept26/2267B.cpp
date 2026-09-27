#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> V(n);

        for (int i = 0; i < n; i++) {
            cin >> V[i];
        }

        map<int, int> m;

        for (int i = 0; i < n; i++) {
            m[V[i]]++;
        }

        vector<int> V1;

        while (!m.empty()) {
            for (auto it = m.rbegin(); it != m.rend(); it++) {
                V1.push_back(it->first);
            }

            for (auto it = m.begin(); it != m.end();) {
                it->second--;

                if (it->second == 0) {
                    it = m.erase(it);
                } else {
                    it++;
                }
            }
        }

        for (int x : V1) {
            cout << x << " ";
        }

        cout << endl;
    }
}