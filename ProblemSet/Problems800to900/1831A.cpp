#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        vector <int> ac;
        for (int i=0; i<n; i++){
            ac.push_back(a[i]);
        }
        sort(a.begin(),a.end());
        int num = a[0]+a[a.size()-1];
        vector <int> b;
        for (int i=0; i<n; i++){
            int req = num-ac[i];
            b.push_back(req);
        }
        for (int i=0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}