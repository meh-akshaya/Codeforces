#include <iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,n;
        cin >> a >> b >> n;
        vector<long long> V(n);
        for(long long i=0; i<n; i++){
            cin >> V[i];
        }
        long long maxt = b;
        for(long long i=0; i<V.size(); i++){
            if(V[i]>=a){
                maxt= maxt+(a-1);
            }else{
                maxt= maxt+V[i];
            }
        }
        cout << maxt << endl;

    }
}