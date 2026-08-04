#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 1;
        int flag1 = 0;
        int flag2 = 0;
        while(i!=s.size()-1){
            if(s[i]!=s[i-1] && s[i]!=s[i+1] && s[i+1]==s[i-1]){
                flag2++;
                break;
            }
            if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                flag1++;
            }
            i++;
        }
        vector<char>V;
        V.push_back(s[0]);
        for(int i=1; i<s.size();i++){
            if(s[i]!=s[i-1]){
                V.push_back(s[i]);
            }
        }
        if(flag2!=0){
            cout << V.size()-2 << endl;
        }else if(flag1!=0){
            cout << V.size()-1 << endl;
        }else{
            cout << V.size() << endl;
        }
    }
}