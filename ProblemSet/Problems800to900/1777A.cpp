#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> V(n);
        for (long long i = 0; i<n; i++){
            cin >> V[i];
        }
        long long p = 0;
        long long count = 0;
        for (long long i =0; i<n-1;i++){
            if (V[i]%2==V[i+1]%2){
                count++;
            }
        }
        cout << count << endl;
    }
}