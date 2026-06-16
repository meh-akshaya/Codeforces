#include <iostream>
#include <vector>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long n,k;
        cin >> n >> k;
        vector <long long> v(n);
        for (long long i=0; i<n; i++){
            cin >> v[i];
        }
        long long num = 1;
        if (k==1) {
            for (long long i=0; i<n-1; i++) {
                if (v[i]<=v[i+1])
                num++;
            }
            if (num==n) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }

        else {
            cout << "YES" << endl;
        }
}
}