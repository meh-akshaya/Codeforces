#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> V(n);
        for (int i=0; i<n; i++){
            cin >> V[i];
        }
        int i=0;
        int count1 =0;
        int count2 =0;
        int count3 =0;
        int index = 0;
        int flag = 0;
        for (int i=0; i<n; i++){
            if (V[i]==1){
                count1++;
            }else if (V[i]==2){
                count2++;
            }else {count3++;}
            if (count1==(count2+count3) && count1!=0){
                index = count2+count3-1;
                count1 = 0;
                count2 = 0;
                count3 = 0;
                break;
            }else if (i==n-1){
                flag = 1;
            }
        }
        for (int i=index; i<n; i++){
            if (V[i]==1){
                count1++;
            }else if (V[i]==2){
                count2++;
            }else {count3++;}
            if (count3==(count1+count2) && count3!=0){
                index = index+count2+count3-1;
                break;
            }else if(i==n-1){
                flag = 1;
            }
        }
        if (flag == 0 && index!=n-1){
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
}