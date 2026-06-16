#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int num1 = 0;
        int num2 = 0;
        for (int i=0; i<n; i++){
            if (a[i]==1){
                num1++;
            }else{num2++;}
        }
        if (num1>=num2){
            if (num2%2==0){
                cout << 0 << endl;;
            }else {
                cout << 1 << endl;
            }
        }
        else {
                int p = num2-num1;
                if (p%2==0){
                    p = p/2;
                }else {
                    p = (p/2)+1;
                }
                if ((num2-p)%2==0){
                    cout << p << endl;
                }else{
                    cout << p+1 << endl;
                }
        }
    }
}