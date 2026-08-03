#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        vector<long long> V1(n);
        vector<long long> V2(m);
        for(int i=0; i<n; i++){
            cin >> V1[i];
        }
        for(int i=0; i<n; i++){
            cin >> V2[i];
        }
        vector<long long >V;
        for(int i=0; i<n; i++){
            V.push_back(V1[i]);
        }
        for(int i=0; i<m; i++){
            V.push_back(V2[i]);
        }
        sort(V.begin(),V.end());
        if(n<=m){
            cout << "No" <<endl;
        }else{

        }
        


    }
}