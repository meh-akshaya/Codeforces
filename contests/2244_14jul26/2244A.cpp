#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max1 = 0;
        int con = 0;
        for (int i=0; i<n; i++){
            if(s[i]=='#'){
                con++;
                if(con>max1){
                    max1=con;
                }
            }else{
                con = 0;
            }
        }
        if(max1%2==0){
            cout << max1/2 << endl;
        }else {
            cout << (max1/2)+1 << endl;    
        }
        
    }
}