#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp (long long a,long long b){
    return a>b;
}
int main() {
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector <long long> v(n);
        for (long long i=0; i<n; i++){
            cin >> v[i];
        }
        long long num = 0;
        sort(v.begin(),v.end(),cmp);
        if (n>2){
            for (long long i=0; i<n-2; i++){
                if ((v[i]%v[i+1])==v[i+2]){
                    num++;
                }
                else {break;}   
            }
            if (num == n-2){
                cout << v[0] << " " << v[1] << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
        else {
            cout << v[0] << " " << v[1] << endl;
        }
    }
}