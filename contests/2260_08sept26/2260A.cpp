#include <iostream>
#include <vector>
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
        int count = 0;
        if(n==2){
            if(V[0]==0 && V[1]==0){
                cout << 0 << endl;
            }else {
                cout << -1 << endl;
            }
        }else{
            int count = 0;
            for(int i=1; i<V.size()-1; i++){
                if(V[i]==0){
                    count++;
                }
            }
            if(V[0]==0 && V[n-1]==0){
                cout << 0 << endl;
            }else if(V[0]!=0 && V[n-1]!=0){
                if(count>=2){
                    cout << 2 << endl;
                }else {
                    cout << -1 << endl;
                }
            }else{
                if(count>=1){
                    cout<< 1 << endl;
                }else{
                    cout << -1 << endl;
                }
            }
        }
    }
}