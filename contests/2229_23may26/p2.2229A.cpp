#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector <long long> a(n);
        vector <long long> b(n);
        for (long long i=0; i<n; i++) {
            cin >> a[i];
        }
        for (long long i=0; i<n; i++) {
            cin >> b[i];
        }
        vector <long long> v;
        for (long long i=0; i<n; i++) {
            if (a[i]>b[i]){
                v.push_back(a[i]);
                a[i] = b[i];
            }else {
                v.push_back(b[i]);
            }
        }
        long long sum = 0;
        for (long long i=0; i<n; i++){
            sum = sum+v[i];
        }
        long long max = a[0];
        for (long long i=1; i<n; i++) {
            if (max<a[i]) {
                max = a[i];
            }
        }
        cout << max + sum << endl;
    }
}