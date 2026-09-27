#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int i = 0;
        int j = s.size()-1;
        int count = 0;
        while(i<j){
            if(s[i]==s[j]){
            }else if((s[i]==c && s[j]!=c)||(s[i]!=c && s[j]==c)){
                count++;
            }else{
                count= count+2;
            }
            i++;
            j--;
        }
        cout << count << endl;
    }
}