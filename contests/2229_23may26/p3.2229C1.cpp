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
        for (long long i=0; i<n; i++) {
            cin >> a[i];
        }
        vector <long long> v;
        long long count = 0;
        int flag = 0;
        for (long long i =0; i<n; i++) {
            if (a[i]>0) {
                flag = 1;
            }
        }
        if (a[n-1]>0){
            v.push_back(n);
            count++;
        }
        for (long long i=n-2; i>=0; i--) {
            if (a[i]<0 && count%2!=0) {
                v.push_back(i+1);
                count++;
            } else if (a[i]>0 && count%2 == 0){
                v.push_back(i+1);
                count++;
            }
        }
        if (flag==1) {
            cout << v.size() << endl;
            if (v.size()>0){
                for (long long i=0; i<v.size(); i++) {
                    cout << v[i] << " ";
                }
            }
        }
        else {
            cout << 0 << endl;
        }
    }
}