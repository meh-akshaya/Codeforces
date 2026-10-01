#include <iostream>
#include <vector>
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
        int diff1 = 0;
        for(int i=1; i<n; i++){
            if(V[i]-V[0]>diff1){
                diff1=V[i]-V[0];
            }
        }
        int diff2 = 0;
        for(int i=0; i<n-1; i++){
            if(V[n-1]-V[i]>diff2){
                diff2=V[n-1]-V[i];
            }
        }
        int diff3 = V[n-1]-V[0];
        for(int i=0; i<n-1; i++){
            if(-V[i+1]+V[i]>diff3){
                diff3=V[i]-V[i+1];
            }
        }
cout << max({diff1, diff2, diff3}) << endl;
    }
}