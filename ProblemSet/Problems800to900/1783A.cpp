#include <iostream>
#include <vector>
#include <algorithm>
bool cmp(int a,int b){
    return a>b;
}
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> V(n);
        for (int i=0; i<n; i++){
            cin>> V[i];
        }
        int count = 1;
        for (int i=1; i<n; i++){
            if (V[i]==V[i-1]){
                count++;
            }
        }
        if (count==n){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
            sort(V.begin(),V.end(),cmp);
            int i = 0;
            while (true){
                if (V[i]==V[i+1]){
                    swap(V[i],V[n-1]);
                    i++;
                }else{
                    break;
                }
            }
            for (int i=0; i<n; i++){
                cout << V[i] << " ";
            }cout << endl;
        }
    }
}
