#include <iostream>
#include <vector>

using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;
        vector<long long> V;
        if(n>=3){
            for (long long i=0; i<n; i++){
                if(i<3){
                    V.push_back(i+1);
                }else{
                V.push_back(2*V[i-1]);
            }
            }
        }else{
            if(n==1){
                V.push_back(1);
            }else if(n==2){
                V.push_back(-1);
            }
        }
        for (long long i=0; i<V.size(); i++){
            cout << V[i] << " ";
        }
        cout << endl;
    }
}