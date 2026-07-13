#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> V;
        vector<int> V1;
        for (int i=0; i<n;i++){
            V.push_back((i+1));
        }
        for (int i=0; i<n; i<i++){
            V1.push_back((i+1)*(i+1));
        }
        sort(V.begin(),V.end());
        for (int i=0; i<V.size(); i++){
            cout << V[i] << " ";
        }cout << endl;
    }
}