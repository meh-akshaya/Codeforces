#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a,b;
        cin >> a;
        cin >> b;
        int a1 = 0;
        int b1 = 0;
        if(n<3){
            if(a==b){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }if(n==3){
            if ((a == "110" || a == "011" || a == "001" || a == "100") && (b == "110" || b == "011" || b == "001" || b == "100")){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            for(int i=0;i<n;i++){
                if(a[i]=='1'){
                    a1++;
                }
                if(b[i]=='1'){
                    b1++;
                }
            }
            if(a1!=b1){
                cout << "No" << endl;
            }else {
                set <string> s;
                

            }
        }
    }

}