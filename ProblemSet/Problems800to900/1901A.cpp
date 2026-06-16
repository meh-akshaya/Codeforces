#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        vector <int> v1(n);
        vector <int> v2;
        for (int i=0; i<n; i++) {
            cin >> v1[i];
        }
        v2.push_back(v1[0]);
        for (int i=0; i<n-1; i++) {
            v2.push_back(v1[i+1]-v1[i]);
        }
        v2.push_back(2*(x-v1[n-1]));
        int num = INT_MIN;
        for (int i=0; i<v2.size(); i++) {
            if (v2[i]>num) {
                num = v2[i];
            }
        }
        cout << num << endl;
    }
}