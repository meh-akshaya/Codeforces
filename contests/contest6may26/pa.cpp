#include <iostream>
#include <vector>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector <int> v(N);
        for (int i=0; i<N; i++) {
            cin >> v[i];
        }
        for (int i=N-2; i>=0; i--) {
            if (v[i+1]>0){
                v[i] = v[i]+v[i+1];
            }
            
        }
        int count = 0;
        for (int i=0; i<N; i++) {
            if (v[i] > 0) {
                count++;
            }
        }
        cout << count << endl;

    }
}