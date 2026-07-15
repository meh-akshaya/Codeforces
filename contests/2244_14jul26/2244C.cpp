#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,x,y;
        cin >> n >> x >> y;
        vector <long long> V(n);
        for (long long i=0; i<n; i++){
            cin >> V[i];
        }
        long long count = 0;
        for (long long i=0; i<V.size(); i++){
            if(V[i]!=i+1){
                long long p = abs(V[i]-V[V[i]-1]);
                if(p%x==0 || p%y==0 || (p-x)%y==0 || (p-y)%x==0 || (p-2*y)%x==0 || (p-2*x)%y==0 || (p-3*x)%y==0 || (p-3*y)%x==0){
                    count++;
                }
            }else {
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