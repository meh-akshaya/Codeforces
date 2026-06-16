#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector <long long> b(n);
        vector <long long> v;
        for (long long i=0; i<n; i++) {
            cin >> b[i];
        }
        v.push_back(b[0]);
        for (long long i=1; i<n; i++) {
            if (b[i]<b[i-1]) {
            v.push_back(b[i]);
            v.push_back(b[i]);
            }
            else {
                v.push_back(b[i]);
            }
        }
        cout << v.size() << endl;
        for (long long i=0; i<v.size(); i++) {
            cout << v[i] << " ";
        }

    }
}