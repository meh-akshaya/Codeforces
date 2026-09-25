#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> V(n);
        for (int i=0; i<V.size(); i++){
            cin >> V[i];
        }
        int count = 0;
        if(V[0]==1){
            V[0]=2;
        }
        for(int i=1; i<V.size(); i++){
            if(V[i]==1){
                V[i]= V[i]+1;
                count++;
            }
            if(V[i]%V[i-1]==0){
                V[i]= V[i]+1;
            }
        }
        for(int i=0; i<V.size();i++){
            cout << V[i] << " ";
        }
        cout << endl;
    }
}