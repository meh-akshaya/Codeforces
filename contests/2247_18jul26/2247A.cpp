#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;
        vector<int> V(n);
        for (int i = 0; i < n; i++){
            cin >> V[i];
        }
        if (n % 2 != 0) {
            cout << "No" << endl;;
            continue;
        }

        int p = 0;
        int q = 0;
        for (int i = 0; i < n; i++) {
            if (V[i] == 1){
                p++;
            }
            else{
                q++;
            }
        }
        if (q % 2 == (n / 2) % 2){
            cout << "Yes" << endl;;
        }
        else{
            cout << "No" << endl;
        }
    }
}