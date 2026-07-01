#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector <long long> V(n);
        for (long long i=0; i<n; i++){
            cin >> V[i];
        }
        int a = V[0];
        if (n>1 && n%2==0){
            for (long long i=0; i<n-1; i++){
                a = a^V[i+1];
            }
            if (a!=0){
                cout << -1 << endl;
            } else {
                cout << 0 << endl;
            }
        }else if (n>1 && n%2!=0){
            for (long long i=0; i<n-1; i++){
                a = a^V[i+1];
            }
            cout << a << endl;
        }
        else {
            cout << V[0] << endl;
        }
    }
}
