#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> a(n);
        for (long long i=0; i<n; i++) {
            cin >> a[i];
        }
        vector <long long> b;
        vector <long long> c;
        sort (a.begin(),a.end());
        int count = 1;
        for (long long i=1; i<n; i++) {
            if (a[i]==a[i-1]) {
                count++;
            }
        }
        if (count == n) {
            cout << -1 << endl;
        }
        else {
            c.push_back(a[n-1]);
            for (long long i=n-2; i>=0; i--) {
                if (a[i]==a[n-1]) {
                    c.push_back(a[i]);
                }
                else {
                    b.push_back(a[i]);
                }
            }
            cout << b.size()<< " " << c.size() << endl;
            for (long long i=0; i<b.size(); i++){
                cout << b[i] << " ";
            }
            cout << endl;
            for (long long i=0; i<c.size(); i++){
                cout << c[i] << " ";
            } cout << endl;
        }

    }
}