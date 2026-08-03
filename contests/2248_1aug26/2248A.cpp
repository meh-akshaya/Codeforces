#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a = 0;
        int b= 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                a = i;
                break;
            }
        }
        s.erase(a,1);
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                b = i;
                break;
            }
        }
        s.erase(b,1);
        cout << s << endl;
    }
}