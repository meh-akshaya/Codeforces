#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector <long long> V(n);
        for (long long i=0; i<V.size(); i++){
            cin >> V[i];
        }
        for (long long i =0; i<V.size()-1;i++){
            long long p = V[i]-(i+1);
            if(p>0){
            V[i]=V[i]-p;
            V[i+1]=V[i+1]+p;
            }
        }
        long long count = 1;
        for(long long i =0; i<V.size()-1; i++){
            if(V[i]<V[i+1]){
                count++;
            }
        }
        if(count==n){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
}