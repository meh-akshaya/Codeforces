#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        vector <long long> V(k);
        for (long long i=0; i<k; i++){
            cin >> V[i];
        }
        long long count2 = 0;
        long long count3 = 0;

        if (k==1){
            if (V[0]>2){
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        } else {
            for (long long i=0; i<k; i++){
                if (V[i]>2){
                    count3++;
                } else if (V[i]==2){
                    count2++;
                }
            }
            if (count3 >= 1 || count2 >= 2){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }

    }
}