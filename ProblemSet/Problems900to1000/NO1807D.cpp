#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,q;
        cin >> n >> q;
        vector<long long> V(n);
        for(long long i=0; i<n; i++){
            cin >> V[i];
        }
        for (long long i=0; i<q; i++){
            long long l,r,k;
            cin >> l >> r >> k;
        }
            long long sum = 0;
            for(long long i=0; i<V.size();i++){
                if(i<l-1 || i>r-1){
                    sum=sum+V[i];
                }else{
                    sum = sum+k;
                }
                if(i==V.size()-1){
                    if(sum%2==0){
                        cout << "No" << endl;
                        sum = 0;
                    }else{
                        cout << "Yes" << endl;
                        sum = 0;
                    }
                }
            }
    }
}

//pause