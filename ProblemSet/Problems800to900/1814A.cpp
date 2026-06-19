#include <iostream>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while (t--){
        long long n,k;
        cin >> n >> k;
        if (n%2==0){
            cout << "Yes" << endl;
        }
        else {
            if (k%2==0){
                cout << "No" << endl;
            }
            else {
                cout << "Yes" << endl;
            }
        }
    }
}