#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    int min = abs(v[0]);
    for (int i=1; i<n; i++) {
        if (min>abs(v[i])) {
            min = abs(v[i]);
        }
    }
    cout << min << endl;
}