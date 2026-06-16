#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> v(n);
        for (long long i=0; i<n; i++) {
            cin >> v[i];
        }
        vector <long long> d(n-1);
        for (int i=0; i<n-1; i++) {
            d[i] = v[i+1]-v[i];
        }
        long long a = LLONG_MAX;
        for (int i=0; i<d.size(); i++) {
            if (d[i]<a && d[i]>=0) {
                a = d[i];
            }
        }
        vector <long long> v2(n);
        for (int i=0; i<n; i++) {
            v2[i]=v[i];
        }
        sort(v2.begin(),v2.end());
        if (v!=v2) {
            cout << 0 << endl;
        }
        else {
            cout << (a/2)+1 << endl;
        }
    }
}