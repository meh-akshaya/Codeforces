#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        string s;
        cin >> s;
        int greater = 0;
        int smaller = 0;
        for(int i=1; i<n; i++){
            if(s[i]==s[i-1]){
                smaller++;
                if(smaller>greater){
                    greater=smaller;
                }
            }else{
                smaller = 0;
            }
        }
        cout << greater+2 << endl;

    }
}