#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> V(n);
        for(int i=0; i<n; i++){
            cin >> V[i];
        }
        sort(V.begin(),V.end());
        long long maxc = 1;
        long long smaxc = 1;
        for(long long i=1; i<V.size(); i++){
            long long p = abs(V[i]-V[i-1]);
            if(p<=k){
                smaxc++;
                if(smaxc>maxc){
                    maxc=smaxc;
                }
            }else{
                smaxc = 1;
            }
        }
        cout << n-maxc << endl;
    }
}