#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> V(n);
        for(int i=0; i<n; i++){
            cin >> V[i];
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum = gcd(sum,abs(V[i]-(i+1)));
        }
        cout << sum << endl;


    }

}