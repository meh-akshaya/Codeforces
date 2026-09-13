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
        int count1 = 0;
        int count2 = 0;
        for(int i=0; i<n; i++){
            cin >> V[i];
            if(V[i]==1){
                count1++;
            }else{
                count2++;
            }
        }
        if(count1>=count2){
            cout << "Bessie" << endl;
        }else{
            cout << "Elsie" << endl;
        }

    }

}