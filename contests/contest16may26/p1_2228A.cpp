#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        int flag = 0;
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        if (n==1){
            if(v[0]%3==0) {
                cout << "1" << endl;
                flag = 1;
            }
        }
        else {
            for (int i=0; i<n; i++) {
                if (v[i]==0) {
                    count0++;
                }else if (v[i]==1) {
                    count1++;
                }
                else {
                    count2++;
                }
            }
            if (count1<=count2) {
                cout << (count1+((count2-count1)/3))+count0 << endl;
                flag = 1;
            }else if(count1>count2) {
                cout << count2+((count1-count2)/3)+count0 << endl;
                flag =1;
            }           
        }
        if (flag ==0){
            cout << "0" << endl;
        }   
    }
}