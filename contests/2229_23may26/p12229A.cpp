#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        int avg = 0;
        int largest = v[0];
        int smallest = v[0];
        for (int i =1; i<n; i++) {
            if (v[i]<smallest) {
                smallest = v[i];
            }
            if (v[i]>largest) {
                largest = v[i];
            }
        }
        avg = (largest+smallest)/2;
        int p = avg-smallest;
        int q = largest-avg;
        if (p>q){
            cout << p << endl;
        }
        else {
            cout << q << endl;
        }

    }
}