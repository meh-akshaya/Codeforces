#include <iostream>
#include <vector>
#include <algorithm>
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
        sort(v.begin(),v.end());
        int num1 = 0;
        int num2 = 0;
        int num3 = 0;
        if (n%2==0) {
            for (int i=0; i<n; i++) {
                if (v[i]==v[0]) {
                    num1++;
                }
                else if (v[i]==v[n-1]) {
                    num2++;
                }
                else {
                    num3++;
                }
            }
            if ((num1==num2 || num1==v.size() || num2 == v.size())  && num3==0) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            for (int i=0; i<n; i++) {
                if (v[i]==v[0]) {
                    num1++;
                }
                else if (v[i]==v[n-1]) {
                    num2++;
                }
                else {
                    num3++;
                }
            }
            if ((num1+1==num2 || num1-1==num2 || num1==v.size() || num2==v.size()) && num3==0) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }            
            
        }
    }
}